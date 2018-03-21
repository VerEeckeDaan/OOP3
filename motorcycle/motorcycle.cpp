#include "motorcycle.h"

namespace Vehicles {

    // :: Scope resolution operator
    Motorcycle::Motorcycle(std::string brand, std::string model)
     : engine(0, 0){

        this->model = model;
        this->brand = brand;
        maxSpeed = 0;
        capacity = 0;
        yearOfManufactoring = 0;
    }

    void Motorcycle::setMaxSpeed(unsigned int maxSpeed){
        this->maxSpeed = maxSpeed;
    }

    void Motorcycle::setCapacity(unsigned int capacity){
        this->capacity = capacity;
    }

    void Motorcycle::setYearOfManufactoring(unsigned int yearOfManufactoring){
        if (yearOfManufactoring >= 1880){
            this->yearOfManufactoring = yearOfManufactoring;
        }
    }

    std::string Motorcycle::getModel(void){
        return model;
    }

    std::string Motorcycle::to_string(void){
        // return "This is a " + std::to_string(brand) + 
        // std::to_string(model) + "from the year : " + 
        // std::to_string(yearOfManufactoring) + "with a capacity of : " + 
        // std::to_string(capacity) + "and a speed of " + std::to_string(maxSpeed) + "Km/h.";
        return "";
    }
};