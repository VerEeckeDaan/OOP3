#include "motorcycle.h"

Motorcycle::Motorcycle(std::string brand, int capacity, int maxSpeed, int yearOfManufactoring, std::string model)
{
    setBrand(brand);
    setCapacity(capacity);
    setMaxSpeed(maxSpeed);
    setYearOfManufactoring(yearOfManufactoring);
    setModel(model);
}

std::string Motorcycle::to_string(){
    return "This is a : " + std::to_string(brand) + 
    std::to_string(model) + "from the year : " + 
    std::to_string(yearOfManufactoring) + "with a capacity and speed of : " + 
    std::to_string(capacity) + std::to_string(maxSpeed) + ".";
}

std::string Motorcycle::getBrand(){
    return brand;
}

int Motorcycle::getCapacity(){
    return capacity;
}

int Motorcycle::getMaxSpeed(){
    return maxSpeed;
}

int Motorcycle::getYearOfManufactoring(){
    return yearOfManufactoring;
}

std::string Motorcycle::getModel(){
    return model;
}

void Motorcycle::setBrand(std::string brand){
    this->brand = brand;
}

void Motorcycle::setCapacity(int capacity){
    this->capacity = capacity;
}

void Motorcycle::setMaxSpeed(int maxSpeed){
    this->maxSpeed = maxSpeed;
};

void Motorcycle::setYearOfManufactoring(int yearOfManufactoring){
    this->yearOfManufactoring = yearOfManufactoring;
};

void Motorcycle::setModel(std::string model){
    this->model = model;
};


