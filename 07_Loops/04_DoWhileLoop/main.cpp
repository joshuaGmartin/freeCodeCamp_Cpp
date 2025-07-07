#include <iostream>

int main()
{
    // const size_t COUNT{0}; // will run because "do" comes first (tests second)
    const size_t COUNT{10};
    size_t i{0};

    do
    {
        std::cout << i << ": Hello!" << std::endl;
        i++;
    } while (i < COUNT);

    std::cout << "Done!" << std::endl;

    return 0;
}
