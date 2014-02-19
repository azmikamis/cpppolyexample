#include "pet.h"
// Pet extends Animal

Pet::Pet(char *name, int age, char *breed, int weight): Animal (age) {
    this->name = name;
}

char *Pet::getName() {
    return this->name;
}
