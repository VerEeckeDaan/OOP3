#pragma once

#include <string>

class Motorcycle {

    //Constructors
    public:
        Motorcycle(std::string brand, int capacity, int maxSpeed, int yearOfManufactoring, std::string model);

    //Getters
    public:
        int getBrand();
        std::string getCapacity();
        int getMaxSpeed();
        int getYearOfManufactoring();
        std::string getModel();

    //Setters
    public:
        void setBrand(int brand);
        void setCapacity(std::string capacity);
        void setMaxSpeed(int maxSpeed);
        void setYearOfManufactoring(int yearOfManufactoring);
        void setModel(std::string model);

    public:
        std::string to_string();

    //Attributes
    private:
        std::string brand; 
        int capacity;
        int maxSpeed;
        int yearOfManufactoring;
        std::string model;
};