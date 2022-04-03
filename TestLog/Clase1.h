#pragma once
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"
using namespace std;

class Clase1
{
public:
	Clase1();
	void run();


protected:
	shared_ptr<spdlog::logger> log;
	int pepe = 23;
	vector<int> miVector = { 1,2,3 };


};

