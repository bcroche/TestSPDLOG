#pragma once
#include "stdafx.h"

using namespace std;

class Clase1
{
public:
	Clase1();
	void run();


protected:
	shared_ptr<spdlog::logger> log= spdlog::get("Clase1");
	int pepe = 23;
	vector<int> miVector = { 1,2,3 };


};

