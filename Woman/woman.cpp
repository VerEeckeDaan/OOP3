#include "woman.h"

Woman::Woman(int age, std::string name)
{
    setName(name);
    setAge(age);
}

std::string Woman::to_string(){
    return name + " is "
        + std::to_string(age)
        + " years old.";
}

int Woman::getAge(){
    return age;
}

std::string Woman::getName(){
    return name;
}

void Woman::setAge(int age){
    this->age = age;
}

void Woman::setName(std::string name){
    this->name = name;
};

