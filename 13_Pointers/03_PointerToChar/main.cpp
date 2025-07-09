#include <iostream>

int main()
{
    // char *message{"Hello World!"}; // trying make an array of const char and referring to it as a char pointer
    const char *message{"Hello World!"}; // needs const

    std::cout << "message: " << message << std::endl;

    // *message = "B"; // error: message is const char array

    // sting literal is converted to const char array, pointer points to first char
    std::cout << "*message: " << *message << std::endl;

    // allow modify string
    char message1[]{"Hello World!"};
    message1[0] = 'B';

    std::cout << "message1: " << message1 << std::endl;

    return 0;
}
