#ifndef FLEA_CODE
#define FLEA_CODE

#include <string>

class Flea
{
    std::string name;
    std::string hobby;
    float age;
    bool alive;

public:
    Flea();
    Flea(std::string name, std::string hobby, float age);
    ~Flea();
    void die();
    std::string getName();
    void setName(std::string name);
    std::string getHobby();
    void setHobby(std::string hobby);
    float getAge();
    void setAge(float age);
    bool isAlive();
    void setAlive(bool alive);
};

#endif // MACRO


