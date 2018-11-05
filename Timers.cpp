#include "Timers.h"
#include "../../SDL/include/SDL.h"

using namespace std;

Timer::Timer() : last_time(0), current_time(SDL_GetTicks()){}

Timer::~Timer() {}

void::Timer::updateTime() {
	current_time = SDL_GetTicks();
	if (current_time > last_time) {
		LOG("Report: %d\n", current_time - last_time);
		last_time = current_time;
	}
}