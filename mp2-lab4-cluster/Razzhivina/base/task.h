#pragma once

#include <ctime>
#include <cstdlib>

int const MAXTIME = 30, MAXCPU = 30;

class Task{
	int /*ID,	*/				//идентефикатор
		Time,				//время на выполнение
		CCPU,				//необходимое количество процессоров
		Tact;				//такт начала выполнения
public:
	//Task():				//конструктор по умолчанию
	//	ID(0), Time(0) {}
	Task(){/*const int _ID = 0*/	//конструктор инициализатор
		/*const int _CCPU =0*/ 
		/*if (_CCPU <= 1)
			throw ("невозможное число процессоров");*/
		/*ID = _ID;*/
		Time = 1 + rand() % MAXTIME;
		CCPU = 1 + rand() % MAXCPU;
		Tact = -1;
	}
	~Task() {				//деструктор
		/*ID = 0;*/	Time = 0; Tact = 0; CCPU = 0;
	}

	int getTime() { return Time; }
	int getCCPU() { return CCPU; }
	void setTact(int _tact) { Tact = _tact; }

	Task& operator=(const Task & tTask) {
		if (this != &tTask) {
			/*ID = tTask.ID;*/
			Time = tTask.Time;
			CCPU = tTask.CCPU;
			Tact = tTask.Tact;
		}
		return *this;
	}
};

struct Node {
	Task data;							//данные
	Node *pNext;						//указатель на следующий
};

class TaskList {
	Node *pFirst;
	int size;
public:
	TaskList() :							//конструктор по умолчанию
		pFirst(nullptr), size(0) {}
	~TaskList() {							//деструктор
		while (pFirst != nullptr) {
			Node *p = pFirst;
			pFirst = p->pNext;
			delete p;
		}
	}
	void AddTask(const Task &_task) {	//добавить задачу в конец списка
		
		Node *p = new Node;
		p->data = _task;				//положили значение в звено
		p->pNext = nullptr;				//сделали следующий за звеном элемент последним
		size++;
	}
	int NumberOfTask() { return size; }
};
