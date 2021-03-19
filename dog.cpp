#include "dog.h"
#include <random>
#include "time.h"


Dog::Dog()
{

}

Dog::Dog(std::string name)
{
    Dog::name = name;
}

Dog::~Dog()
{

}

void Dog::addFlea(Flea *flea)
{
    fleas.push_back(flea);
}

std::string Dog::getFleaNames()
{
    std::string fleaNames;

    if (fleas.size() == 0)
    {
        fleaNames = "No fleas on me!\n";
        return fleaNames;
    }
    
    for (int i = 0; i < fleas.size(); i++)
    {
        fleaNames += fleas[i]->getName();
        if (i != fleas.size() - 1)
        {
            fleaNames += ",";
        }       
    }
    fleaNames += "\n";
    return fleaNames;
}

void Dog::scratch()
{
    srand(time(NULL));
    int deadFlea = rand() % fleas.size();
    fleas[deadFlea]->die();
    fleas.erase(fleas.begin() + deadFlea);
}

void Dog::setName(std::string name)
{
    Dog::name = name;
}

std::string Dog::getName() const
{
    return name;
}