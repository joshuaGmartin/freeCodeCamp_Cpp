#include <iostream>

int main()
{
    // // manual
    // std::cout << "Hello!" << std::endl;
    // std::cout << "Hello!" << std::endl;
    // std::cout << "Hello!" << std::endl;
    // std::cout << "Hello!" << std::endl;
    // std::cout << "Hello!" << std::endl;

    //===========================================================================

    // for (unsigned int i{0}; i < 10; i++)
    // {
    //     std::cout << i << ": Hello!" << std::endl;
    // }
    // std::cout << "Done!" << std::endl;

    //===========================================================================

    // for (size_t i{0}; i < 10; i++) // set type of iterator (convention)
    // {
    //     std::cout << i << ": Hello!" << std::endl;
    // }
    // std::cout << "Done!" << std::endl;
    // std::cout << "size of size_t: " << sizeof(size_t) << std::endl; // 8

    //===========================================================================

    // size_t i{0}; // declare iterator outside of loop scope

    // for (i; i < 10; i++)
    // {
    //     std::cout << i << ": Hello!" << std::endl;
    // }

    // std::cout << "Done!" << std::endl;
    // std::cout << "i: " << i << std::endl; // i must be in scope

    //===========================================================================

    // size_t i{0}; // declare iterator outside of scope

    // for (; i < 10; i++) // don't even need to include iterator if declared outside of loop
    // {
    //     std::cout << i << ": Hello!" << std::endl;
    // }

    // std::cout << "Done!" << std::endl;
    // std::cout << "i: " << i << std::endl; // i must be in scope

    //===========================================================================

    size_t i{0};            // declare iterator outside of scope
    const size_t COUNT{10}; // dont hard code values

    for (; i < COUNT; i++) // don't even need to include iterator if declared outside of loop
    {
        std::cout << i << ": Hello!" << std::endl;
    }

    std::cout << "Done!" << std::endl;
    std::cout << "i: " << i << std::endl; // i must be in scope

    return 0;
}
