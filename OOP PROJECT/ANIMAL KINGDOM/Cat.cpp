#include <string>

class Cat : public Animal
{
private:

public:

Cat() = default;

~Cat() override = default;

void makeNoise() override
{
    std::cout << "Cat communicates by roaring.\n";
}

void Move() override
{
    std::cout << "Cat is walking.\n";
}

void Feed() override
{
    std::cout << "Cat eats meat.\n";
}

};