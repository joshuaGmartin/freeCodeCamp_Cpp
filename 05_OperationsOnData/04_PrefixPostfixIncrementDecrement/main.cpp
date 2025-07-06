#include <iostream>

int main()
{
    // ===============================================================
    // Manual
    // ===============================================================
    std::cout << "========================== Manual ==========================" << std::endl;

    int value{5};

    // increment by one
    value = value + 1;
    std::cout << "value: " << value << std::endl;

    value = 5; // reset to 5

    // decrement by one
    value = value - 1;
    std::cout << "value: " << value << std::endl;

    // ===============================================================
    // Postfix
    // ===============================================================
    std::cout << "========================== Postfix ==========================" << std::endl;

    // increment
    value = 5; // reset to 5
    std::cout << "value(incrementing): " << value++ << std::endl;
    std::cout << "value: " << value << std::endl;

    // decrement
    value = 5; // reset to 5
    std::cout << "value(decrementing): " << value-- << std::endl;
    std::cout << "value: " << value << std::endl;

    // ===============================================================
    // Prefix
    // ===============================================================
    std::cout << "========================== Prefix ==========================" << std::endl;

    // increment
    value = 5; // reset to 5
    std::cout << "value(incrementing): " << ++value << std::endl;
    std::cout << "value: " << value << std::endl;

    // decrement
    value = 5; // reset to 5
    std::cout << "value(decrementing): " << --value << std::endl;
    std::cout << "value: " << value << std::endl;

    return 0;
}
