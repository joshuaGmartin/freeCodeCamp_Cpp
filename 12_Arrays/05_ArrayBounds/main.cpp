#include <iostream>

int main()
{
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // if read data over bounds, will read garbage or crash your program
    std::cout << "numbers[12]: " << numbers[12] << std::endl;

    // if write beyond bounds, you dont own the memory, so other programs can modify and you'll get garbage later
    // That, or you'll corrupt data in other programs
    numbers[1299999] = 777;
    std::cout << "numbers[1299999]: " << numbers[1299999] << std::endl;

    std::cout << "Program end!" << std::endl; // doesn't print: Don't go overbounds!

    return 0;
}
