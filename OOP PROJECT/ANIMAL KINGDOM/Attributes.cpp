#pragma once
#include <string>
#include "Adaptation.cpp"
#include "Stats.cpp"

class Attributes
{

private: 
    std:: string name, color, species, status, life_cycle, training;
    Adaptation ad;
    Stats st;

public:

Attributes(const std::string &n_name, const std::string &n_color, const std::string &n_species, const std::string &n_status, const std::string &n_life_cycle, const std::string &n_training, const Adaptation &n_ad, const Stats &n_st)
    : name(n_name), color(n_color), species(n_species), status(n_status), life_cycle(n_life_cycle), training(n_training,) ad(n_ad), st(n_st)
    {

    }

std:: string getName()
{
    return this->name;
}

std:: string getColor()
{
    return this->color;
}

std:: string getStatus()
{
    return this->status; //endangered status
}

std:: string getCycle()
{
    return this->life_cycle;
}

std:: string getTraining()
{
    return this->training;
}

const Adaptation &getAd()
{
    return this->ad;
}

const Stats &getSt()
{
    return this->st;
}
};