#include <iostream>

int main()
{
    // char message[]{'H', 'e', 'l', 'l', 'o'};
    char message[5]{'H', 'e', 'l', 'l', 'o'}; // single quotes for array

    std::cout << "============= print via loop =============" << std::endl;
    std::cout << "message: ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "============= change char =============" << std::endl;
    // change char in array
    message[1] = 'a';

    // print via looping
    std::cout << "message: ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "============= print message =============" << std::endl;

    std::cout << "message: " << message << std::endl; // gives garbage, no null termination

    std::cout << "============= print message with termination=============" << std::endl;

    char message1[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1: " << message1 << std::endl;
    std::cout << "message1 size: " << sizeof(message1) << std::endl;

    std::cout << "============= print message with auto termination=============" << std::endl;

    char message2[6]{'H', 'e', 'l', 'l', 'o'}; // auto fills with null terminators
    std::cout << "message2: " << message2 << std::endl;
    std::cout << "message2 size: " << sizeof(message2) << std::endl;

    std::cout << "============= print message with auto termination=============" << std::endl;

    char message3[]{'H', 'e', 'l', 'l', 'o'};           // not a proper c-string: no null char
    std::cout << "message3: " << message3 << std::endl; // prints a mess
    std::cout << "message3 size: " << sizeof(message3) << std::endl;

    std::cout << "============= string literals =============" << std::endl;

    char message4[]{"Hello, World!"};                                // double quotes tells c++ to auto add null terminator
    std::cout << "message4: " << message4 << std::endl;              // no mess
    std::cout << "message4 size: " << sizeof(message4) << std::endl; // 6, not 5

    std::cout << "============= print int array =============" << std::endl;

    int numbers[]{1, 2, 3, 4, 5};
    std::cout << "numbers: " << numbers << std::endl; // weird hexidecimal looking stuff

    return 0;
}
