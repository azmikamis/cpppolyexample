#include "animal.h"
// Pet extends Animal

#ifndef PET
#define PET 1

class Pet : public Animal {
    public:
        Pet(char *name, int age, char *breed, int weight);
        char *getName();
    protected:
        char *name;

};

#endif
