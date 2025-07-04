#include <iostream>

int main()
{
    // bool red_light{true};
    bool red_light{false};

    bool green_light{true};
    // bool green_light{false};

    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go!" << std::endl;
    }

    if (green_light)
    {
        std::cout << "Green!" << std::endl;
    }
    else
    {
        std::cout << "Red!" << std::endl;
    }

    // Size
    std::cout << "size of bool: " << sizeof(bool) << std::endl; // 1 byte

    // Print a bool
    std::cout << "red light: " << red_light << std::endl;     // true = 1
    std::cout << "green light: " << green_light << std::endl; // false = 0

    // Print a bool as true/false
    std::cout << std::boolalpha;
    std::cout << "red light: " << red_light << std::endl;     // true = 1
    std::cout << "green light: " << green_light << std::endl; // false = 0

    return 0;
}
