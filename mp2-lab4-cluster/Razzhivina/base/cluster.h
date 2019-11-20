#pragma once

#include "queue.h"
#include "task.h"
#include "statistic.h"
#include <iostream>

using namespace std;

class Cluster {
	int proc;					//����������
	int freeproc;				//��������� ���������
	TaskList ExecutableTask;	//������ ���������� �����
	Statistic st;				//����������
	Queue <Task> queue;			//������� �� �����

public:
	Cluster(int _proc) {
		if (_proc <= 1)
			throw "����� ���������� �����������";
		proc = _proc;
		freeproc = proc;		//��� ��� ������ �������, �� ��� ���������� ���������
	}
	void Print() {
		st.Print();
	}
	~Cluster() {				//� ����� ��...
		proc = 0;
		freeproc = 0;
	}

	void StartCluster(int _tact) {
		if (_tact < 1)
			throw "����� ���������� ������";
		for (int i = 0; i < _tact; i++) {
			Task tmp;
			queue.addEnd(tmp);
			st.CreateTask++;
			while (!queue.isEmpty()) {					//���� ������� �� �����
				Task tmp2 = queue.PopLast();			//
				if (tmp2.getCCPU <= freeproc) {
					ExecutableTask.AddTask(tmp2);
					queue.PopFirst;
					freeproc = freeproc - tmp2.getCCPU;
				}
				else break;
			}
			ExecutableTask.Done();
			int i_tmp = ExecutableTask.NumberOfTask;
			i_tmp = i_tmp - ExecutableTask.PullExecutableTask;
			freeproc = freeproc + ExecutableTask.PullExecutableTask;
			st.AddDone(i_tmp);
			st.InQueue(queue.getCElem());					
			st.Average((proc - freeproc) / proc * 100);		//������� ����������/����������*100%
			st.AddTact();
		}
		
	}
};