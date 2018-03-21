#pragma once

#include <string>
#include "engine.h"

namespace Vehicles {

    class Motorcycle {

        //Constructors
        public:
            Motorcycle(std::string brand, std::string model);

        public:      
            void setMaxSpeed(unsigned int maxSpeed);
            void setCapacity(unsigned int capacity);
            void setYearOfManufactoring(unsigned int yearOfManufactoring);
            std::string getModel(void);

        public:
            std::string to_string(void);

        //Attributes
        private:
            std::string brand; 
            Parts::Engine engine;                      //compositie   
            unsigned int capacity;              
            unsigned int maxSpeed;
            unsigned int yearOfManufactoring;
            std::string model;

    };

};