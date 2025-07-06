#include <iostream>

int main()
{
    int num1{60};
    int num2{60};

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    std::cout << "--------------- Comparatives ---------------" << std::endl;

    std::cout << std::boolalpha;
    // std::cout << "num1 < num2: " << num1 < num2 << std::endl; // compiler error: tries to print num1 first and then compares to num2
    std::cout << "num1 < num2: " << (num1 < num2) << std::endl;
    std::cout << "num1 <= num2: " << (num1 <= num2) << std::endl;
    std::cout << "num1 > num2: " << (num1 > num2) << std::endl;
    std::cout << "num1 >= num2: " << (num1 >= num2) << std::endl;
    std::cout << "num1 == num2: " << (num1 == num2) << std::endl;
    std::cout << "num1 != num2: " << (num1 != num2) << std::endl;
    std::cout << "!num1: " << (!num1) << std::endl;

    std::cout << "--------------- Store comparison ---------------" << std::endl;
    std::cout << num1 << " == " << num2 << ": " << (num1 == num2) << std::endl;

    return 0;
}
