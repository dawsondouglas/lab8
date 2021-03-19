#ifndef DOG_CODE
#define DOG_CODE

#include "flea.h"
#include <vector>
#include <string>

class Dog
{
std::string name;
std::vector<Flea*> fleas;

public:
    Dog();
    Dog(std::string name);
    ~Dog();
    void addFlea(Flea *);
    std::string getFleaNames();
    void scratch();
    void setName(std::string name);
    std::string getName() const;
};

#endif



