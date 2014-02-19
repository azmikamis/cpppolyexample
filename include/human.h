#include "animal.h"
// Human extends Animal

#ifndef HUMAN
#define HUMAN 1

class Human : public Animal {
    public:
        Human(char *firstname, char *lastname, int age);
        char *getName();
    protected:
        char *firstname;
        char *lastname;
};

#endif
