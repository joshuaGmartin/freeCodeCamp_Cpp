#include <iostream>
#include <cstring>

int main()
{
    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strcat ==============" << std::endl;

    char dest[50] = "Hello "; // destination cant be const
    char src[50] = "World!";

    std::strcat(dest, src); // concat src into dest
    std::cout << "dest: " << dest << std::endl;

    std::strcat(dest, " Goodbye World!"); // careful not to go out of bounds of arrays
    std::cout << "dest: " << dest << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strcat #2 ==============" << std::endl;

    char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
    char *src1 = new char[30]{',', ' ', 'T', 'h', 'e', ' ', 'P', 'h', 'o', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '\0'};
    // char *src1 = new char[30]{", The Phoenix King"}; // works also?

    std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl; // does not count \0
    std::cout << "std::strlen(src1): " << std::strlen(src1) << std::endl;

    std::cout << "Concatenating..." << std::endl;
    std::strcat(dest1, src1); // starts at last null char (',' in src1 overwrites '\0' in dest1)

    std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
    std::cout << "dest1: " << dest1 << std::endl;

    delete[] dest1;
    delete[] src1;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strncat ==============" << std::endl;
    // choose number of chars to concat from src
    // returns pointer to result string

    char dest2[50]{"Hello"};
    char src2[30]{" There is a bird on my window"};

    std::cout << std::strncat(dest2, src2, 6) << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strcpy ==============" << std::endl;

    const char *src3 = "C++ is a multipurpose programming language.";
    // char *dest3 = new char[std::strlen(src3) + 1]; // +1 to count for null terminator, which strlen doesn't count. No init
    char *dest3 = new char[std::strlen(src3) + 1]{"temp"};

    std::strcpy(dest3, src3);

    std::cout << "sizeof(dest3): " << sizeof(dest3) << std::endl;
    std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl; // array decay to pointer?
    std::cout << "dest3: " << dest3 << std::endl;

    delete[] dest3;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strncpy ==============" << std::endl;

    const char *src4 = "Hello";
    // const char src4[] = "Hello"; // works also
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'}; // need '/0' to print
    // char dest4[] = "abcdef"; // works also

    std::cout << "dest4: " << dest4 << std::endl;

    std::cout << "Copying..." << std::endl;
    std::strncpy(dest4, src4, 5);

    std::cout << "dest4: " << dest4 << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
