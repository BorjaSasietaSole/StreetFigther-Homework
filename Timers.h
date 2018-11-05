#pragma once
#include "Globals.h"

class Timer {
public:
	Timer();
	~Timer();
	void updateTime();

private:
	unsigned int last_time = 0;
	unsigned int current_time;
};