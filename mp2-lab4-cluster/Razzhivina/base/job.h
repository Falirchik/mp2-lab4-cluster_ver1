#pragma once

class Job{
	int ID,					//идентефикатор
		Time,				//время на выполнение
		Tact;				//такт начала выполнения
public:
	//Job():				//конструктор по умолчанию
	//	ID(0), Time(0) {}
	Job(const int _ID = 0,	//конструктор инициализатор
		const int _time = 0) {
		if (_time <= 1)
			throw ("невозможное время");
		ID = _ID;
		Time = _time;
		Tact = 0;
	}
	~Job() {				//деструктор
		ID = 0;	Time = 0; Tact = 0;
	}

	int getTime() { return Time; }
	void setTact(int _tact) { Tact = _tact; }
};
