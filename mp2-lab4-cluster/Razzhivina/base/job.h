#pragma once

class Job{
	int ID,					//�������������
		Time,				//����� �� ����������
		Tact;				//���� ������ ����������
public:
	//Job():				//����������� �� ���������
	//	ID(0), Time(0) {}
	Job(const int _ID = 0,	//����������� �������������
		const int _time = 0) {
		if (_time <= 1)
			throw ("����������� �����");
		ID = _ID;
		Time = _time;
		Tact = 0;
	}
	~Job() {				//����������
		ID = 0;	Time = 0; Tact = 0;
	}

	int getTime() { return Time; }
	void setTact(int _tact) { Tact = _tact; }
};
