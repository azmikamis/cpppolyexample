// Base class header file

#ifndef ANIMAL
#define ANIMAL 1

class Animal {
    public:
        Animal(int age);
        int getAge();
        virtual char *getName() {};
    protected:
        int age;
};

#endif
