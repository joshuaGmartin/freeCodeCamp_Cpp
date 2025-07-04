#include <iostream>

int main()
{
    // Compiler time error
    // std::cout << "Hello!" << std::endl // No semicolon
    std::cout << "Hello!" << std::endl;

    // Runtime error
    int value = 7 / 0; // Build finished with warnings
    std::cout << "value: " << value << std::endl;

    return 0;
}
