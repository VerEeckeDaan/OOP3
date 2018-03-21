#include "engine.h"

namespace Vehicles {
    namespace Parts {

Engine::Engine(unsigned int capacity, unsigned int cilinders){
    this->capacity = capacity;
    this->cilinders = cilinders;
    this->serial = "";
}

Engine::Engine(unsigned int capacity, unsigned int cilinders,std::string serial)
 : Engine(capacity, cilinders) {
    this->serial = serial;
}

void Engine::set_serial(std::string serial){
    this->serial = serial;
}
unsigned int Engine::get_capacity(void){
    return capacity;
}

unsigned int Engine::get_cilinders(void){
    return cilinders;
}

std::string Engine::get_serial(void){
    return serial;
}

std::string Engine::to_string(){
   return ("Engine serial number: " + serial + "\n\r"
           + "Amount of cylinders: " + std::to_string(cilinders) + "\n\r"
           + "Engine capacity: " + std::to_string(capacity));
}

    };
};