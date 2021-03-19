#include "flea.h"
#include <iostream>

Flea::Flea()
{

}

Flea::Flea(std::string name, std::string hobby, float age)
{
    Flea::name = name;
    Flea::hobby = hobby;
    Flea::age = age;
    Flea::alive = true;
}

Flea::~Flea()
{
    
}
void Flea::die()
{
    Flea::alive = false;
    std::cout << "Arrrrrrgggggghhhhhh" << std::endl;
    delete this;
}
std::string Flea::getName()
{
    return name;
}
void Flea::setName(std::string name)
{
    Flea::name = name;
}
std::string Flea::getHobby()
{
    return hobby;
}
void Flea::setHobby(std::string hobby)
{
    Flea::hobby = hobby;
}
float Flea::getAge()
{
    return age;
}
void Flea::setAge(float age)
{
    Flea::age = age;
}
bool Flea::isAlive()
{
    return alive;
}
void Flea::setAlive(bool alive)
{
    Flea::alive = alive;
}