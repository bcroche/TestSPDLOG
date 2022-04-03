#include "Clase1.h"
#include "spdlog/fmt/ranges.h"  // Pra que se pueden usar colecciones como parametro

Clase1::Clase1()
{
	
}

void Clase1::run()
{
	log->warn("Tengo algun problema con {}", pepe);
	log->error("Mira que bien escribo un vector {}", miVector);
}
