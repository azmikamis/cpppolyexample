// Base class implementation

#include "animal.h"

Animal::Animal(int age) {
    this->age = age;
}

int Animal::getAge() {
    return this->age;
}
