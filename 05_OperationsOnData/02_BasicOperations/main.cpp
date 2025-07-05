#include <iostream>

int main()
{
    int num1{2};
    int num2{7};
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "==================================" << std::endl;

    // addition
    int result = num1 + num2;
    std::cout << "addition result: " << result << std::endl;

    // subtraction
    result = num2 - num1;
    std::cout << "subtraction result: " << result << std::endl;
    result = num1 - num2;
    std::cout << "subtraction (flip) result: " << result << std::endl;

    // multiplication
    result = num2 * num1;
    std::cout << "multiplication result: " << result << std::endl;

    // division
    result = num2 / num1; // 3, no remainder for int
    std::cout << "division result: " << result << std::endl;

    // modulus
    result = num2 % num1;
    std::cout << "modulus result: " << result << std::endl;

    return 0;
}
