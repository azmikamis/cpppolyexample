#include "human.h"
#include <string.h>
// Human extends Animal

Human::Human(char *firstname, char *lastname, int age) : Animal (age) {
    this->firstname = firstname;
    this->lastname = lastname;
}

char *Human::getName() {
    char *fullname;
    fullname = new char[strlen(this->firstname) + 1 + strlen(this->lastname) + 1];
    strcpy (fullname, this->firstname);
    strcat (fullname, " ");
    strcat (fullname, this->lastname);
    return fullname;
}
