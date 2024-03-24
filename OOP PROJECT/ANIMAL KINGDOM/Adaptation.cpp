#pragma once
#include <string>

class Adaptation
{

private:
    int legs; // number of legs
    std::string migration, hibernation, camouflage, diet, habitat, reprod;
    
public:

Adaptation(int n_legs, const std::string &n_migration, const std::string &n_hibernation, const std::string &n_camouflage, const std::string &n_diet, const std::string &n_habitat, const std::string &n_reprod)
    : legs(n_legs), migration(n_migration), hibernation(n_hibernation0), camouflage(n_camouflage), diet(n_diet), habitat(n_habitat), reprod(n_reprod)
{

}

int getLegs()
{
    return this->legs;
}

std::string getMigration()
{
    return this->migration;
}

std::string getHibernation()
{
    return this->hibernation;
}

std::string getCamouflage()
{
    return this->camouflage;
}

std::string getDiet()
{
    return this->diet;
}

std::string getHabitat()
{
    return this->habitat;
}

std::string getReprod()
{
    return this->reprod;
}
};