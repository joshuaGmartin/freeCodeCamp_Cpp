#include <iostream>

int main()
{
    const size_t COUNT{10};
    size_t i{0};

    while (i < COUNT)
    {
        std::cout << i << ": Hello!" << std::endl;
        i++; // increment or runs forever
    }

    std::cout << "Done!" << std::endl;
    std::cout << "i: " << i << std::endl;

    return 0;
}
