#include <string>

class Snake : public Animal
{
private:

public:

Snake() = default;

~Snake() override = default;

void makeNoise() override
{
    std::cout << "Snake communicates by hissing.\n";
}

void Move() override
{
    std::cout << "Snake is sithering.\n";
}

void Feed() override
{
    std::cout << "Snake eats meat.\n";
}
};