#include <iostream>
#include "dog.h"

using namespace std;

int main() {
    Dog *dog1 = new Dog("Good Dog");
    cout << dog1->getFleaNames();
    dog1->addFlea(new Flea("Tim","Sports",24));
    dog1->addFlea(new Flea("Hudson","Music",10));
    dog1->addFlea(new Flea("Sarah","Games",13));
    dog1->addFlea(new Flea("Melanie","Cars",20));
    cout << dog1->getFleaNames();
    dog1->scratch();
    dog1->scratch();
    dog1->scratch();
    cout << dog1->getFleaNames();
    return 0;
}
