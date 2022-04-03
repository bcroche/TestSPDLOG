#pragma once
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"


class Clase2
{
public:
	void run()
	{
		log->info("Mensaje desde la clase 2");

	}
protected:
	std::shared_ptr<spdlog::logger>  log = spdlog::stdout_color_mt("Clase2");
};
