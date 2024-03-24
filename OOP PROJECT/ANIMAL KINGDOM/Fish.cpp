#include <string>

class Fish : public Animal
{
private:

public:

Fish() = default;

~Fish() override = default;

void makeNoise() override
{
    std::cout << "Fish communicates through vibrations.\n";
}

void Move() override
{
    std::cout << "Fish is swimming.\n";
}

void Feed() override
{
    std::cout << "Cat eats meat and plants.\n";
}
};