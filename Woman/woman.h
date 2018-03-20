#pragma once

#include <string>

class Woman {

    //Constructors
    public:
        Woman(int age, std::string name);

    //Getters
    public:
        int getAge();
        std::string getName();

    //Setters
    public:
        void setAge(int age);
        void setName(std::string name);

    public:
        std::string to_string();

    //Attributes
    private:
        int age;
        std::string name;
};

