#pragma once

#include "task.h"
#include <iostream>
using namespace std;

class Statistic {
	int CreatedTask,			//���������� ��������� �����
		ExecutableTask,			//���������� �����
		TaskInQueue,			//� �������
		tact;					//����
	double AverageLoad;			//������� �������� ��������
public:
	
	Statistic():				//����������� �� ���������
		CreatedTask(0),ExecutableTask(0),TaskInQueue(0),tact(0), AverageLoad(0){}
	
	void CreateTask() { CreatedTask++; }
	void ExecutionTask() { ExecutableTask++; }
	void AddDone(int count) {
		if (count < 0)
			throw "������";
		ExecutableTask = ExecutableTask + count;
	}
	void AddTact() { tact++; }
	void InQueue(int count) {
		if (count < 0)
			throw "������";
		TaskInQueue = count;
	}
	void Average(double count) {
		if (count < 0)
			throw "������";
		AverageLoad = AverageLoad + count;
	}
	void Print() {
		cout << "\t ����������";
		cout << "����������� �����: \t" << ExecutableTask << endl;
		cout << "C�������� �����: \t" << CreatedTask << endl;
		cout << "������ � �������: \t" << TaskInQueue << endl;
		cout << "������� �������� ��������: \t" << AverageLoad/tact << endl;
	}

};