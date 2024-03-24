#pragma once // include o singura data
#ifndef ANIMAL
#define ANIMAL

#include <string>
#include "Attributes.cpp"

class Animal 
{
private:
    Attributes at;
      
public:

    Animal() = default;

    virtual ~Animal();

    virtual void makeSound() = 0;
    virtual void Move() = 0;
    virtual void Feed() = 0;

    void setAt(const Attributes &newAt)
    {
        this->at = newAt;
    }

};

#endif