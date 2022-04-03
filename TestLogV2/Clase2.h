#pragma once
#include <spdlog/spdlog.h>


class Clase2
{
public:
	void run()
	{
		log->info("Mensaje desde la clase 2");
		log->debug("Cambio en un .H");
	}
protected:
	std::shared_ptr<spdlog::logger>  log = spdlog::get("Clase2");
};

