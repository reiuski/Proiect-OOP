#include <string>

class Bird : public Animal
{
private:

public:

Bird() = default;

~Bird() override = default;

void makeNoise() override
{
    std::cout << "Bird communicates by chirping.\n";
}

void Move() override
{
    std::cout << "Bird is flying.\n";
}

void Feed() override
{
    std::cout << "Bird eats meat and plants.\n";
}
};