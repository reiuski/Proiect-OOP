#pragma once
#include<string>

class Stats 
{

private:

int speed, strength, weight, age, lifespan;

public:

Stats(int n_speed, int n_strength, int n_weight, int n_age, int n_lifespan)
    :speed(n_speed), strength(n_strength), weight(n_weight),age(n_age),lifespan(n_lifespan)
    {

    }

int getSpeed()
{
    return this->speed;
}

int getStrength()
{
    return this->strength;
}

int getWeight()
{
    return this->weight;
}

int getAge()
{
    return this->age;
}

int getLifespan()
{
    return this->lifespan;
}

};