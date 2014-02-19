// Base class header file

#ifndef ANIMAL
#define ANIMAL 1

class Animal {
    public:
        Animal(int age);
        int getAge();
        virtual char *getName() { };
        virtual const char *Speak() { };
    protected:
        int age;
};

#endif
