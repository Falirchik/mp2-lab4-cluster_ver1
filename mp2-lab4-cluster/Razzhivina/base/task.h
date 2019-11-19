#pragma once

#include <ctime>
#include <cstdlib>

int const MAXTIME = 30, MAXCPU = 30;

class Task{
	int /*ID,	*/				//�������������
		Time,				//����� �� ����������
		CCPU,				//����������� ���������� �����������
		Tact;				//���� ������ ����������
public:
	//Task():				//����������� �� ���������
	//	ID(0), Time(0) {}
	Task(){/*const int _ID = 0*/	//����������� �������������
		/*const int _CCPU =0*/ 
		/*if (_CCPU <= 1)
			throw ("����������� ����� �����������");*/
		/*ID = _ID;*/
		Time = 1 + rand() % MAXTIME;
		CCPU = 1 + rand() % MAXCPU;
		Tact = -1;
	}
	~Task() {				//����������
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
	Task data;							//������
	Node *pNext;						//��������� �� ���������
};

class TaskList {
	Node *pFirst;
	int size;
public:
	TaskList() :							//����������� �� ���������
		pFirst(nullptr), size(0) {}
	~TaskList() {							//����������
		while (pFirst != nullptr) {
			Node *p = pFirst;
			pFirst = p->pNext;
			delete p;
		}
	}
	void AddTask(const Task &_task) {	//�������� ������ � ����� ������
		
		Node *p = new Node;
		p->data = _task;				//�������� �������� � �����
		p->pNext = nullptr;				//������� ��������� �� ������ ������� ���������
		size++;
	}
	int NumberOfTask() { return size; }
};
