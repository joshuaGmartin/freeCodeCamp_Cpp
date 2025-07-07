#include <iostream>

int main()
{
    int a{35};
    int b{200};
    int max{};

    std::cout << "============ with if statement ============" << std::endl;

    if (a > b)
        max = a;

    else
    {
        max = b;
    }

    std::cout << "max: " << max << std::endl;

    // ================================================================================
    std::cout << "============ with ternary ============" << std::endl;

    // max = (a > b) ? a : "hello"; // a and b must be of comparable types
    // max = (a > b) ? a : b;
    // std::cout << "max: " << max << std::endl;

    auto max1 = (a > b) ? a : 22.5f;
    std::cout << "max1: " << max1 << std::endl;

    return 0;
}
