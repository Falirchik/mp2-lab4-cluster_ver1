#pragma once

#include "queue.h"
#include "task.h"
#include <iostream>
using namespace std;

class Statistic {
	int CreatedTask,			//���������� ��������� �����
		ExecutableTask,			//����������� �����
		TaskInQueue,			//� �������
		tact;					//����
	double AverageLoad;			//������� �������� ��������
public:
	Statistic():				//����������� �� ���������
		CreatedTask(0),ExecutableTask(0),TaskInQueue(0),tact(0), AverageLoad(0){}
	
	void Print() {
		cout << "����������� �����: \t" << ExecutableTask << endl;
		cout << "C�������� �����: \t" << CreatedTask << endl;
		cout << "������ � �������: \t" << TaskInQueue << endl;
		cout << "������� �������� ��������: \t" << AverageLoad << endl;
	}

};