#pragma once

#include "queue.h"
#include "task.h"
#include <iostream>
using namespace std;

class Statistic {
	int CreatedTask,			//количество созданных задач
		ExecutableTask,			//выполн€емых задач
		TaskInQueue,			//в очереди
		tact;					//такт
	double AverageLoad;			//средн€€ загрузка кластера
public:
	Statistic():				//еонструктор по умолчанию
		CreatedTask(0),ExecutableTask(0),TaskInQueue(0),tact(0), AverageLoad(0){}
	
	void Print() {
		cout << "«авершенных задач: \t" << ExecutableTask << endl;
		cout << "Cозданных задач: \t" << CreatedTask << endl;
		cout << "«адачи в очереди: \t" << TaskInQueue << endl;
		cout << "—редн€€ загрузка кластера: \t" << AverageLoad << endl;
	}

};