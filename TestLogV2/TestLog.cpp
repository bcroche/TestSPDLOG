// TestLog.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "Clase1.h"
#include "Clase2.h"


void configLoggersConsola()
{
    using namespace spdlog;
    auto log = spdlog::stdout_color_mt("main");
    log->set_level(level::warn);

    auto logc1= spdlog::stdout_color_mt("Clase1");
    logc1->set_level(level::debug);

    auto logc2 = spdlog::stdout_color_mt("Clase2");
    logc2->set_level(level::debug);


}
void configLoggersFile()
{
    
    using namespace spdlog;
    auto log = spdlog::basic_logger_mt("main", "logs/basic-log.txt", true);
    log->set_level(level::warn);

    auto logc1 = spdlog::basic_logger_mt("main", "logs/basic-log.txt", true);
    logc1->set_level(level::debug);

    auto logc2 = spdlog::basic_logger_mt("main", "logs/basic-log.txt", true);
    logc2->set_level(level::debug);


}



int main()
{
    configLoggersConsola();
    //configLoggersFile();
    spdlog::set_level(spdlog::level::debug); // cambia el nivel de TODOS los loggers

    auto log = spdlog::get("main");
    
    

    //spdlog::info("Traza con el logger por defecto");
    
    log->info("Hello {}", "World");

    Clase1 c1;
    c1.run();

    Clase2 c2;
    c2.run();
}




/*
* Hay que crear un directorio include dentro del proyecto
* En ese directorio metemos el directorio spdlog
* En propiedades del proyecto (Todas las configuraciones) añadimos en C/C++/General include como directorio de inclusión adicional
* En nuestros ficheros añadimos #include <spdlog/spdlog.h>



*/