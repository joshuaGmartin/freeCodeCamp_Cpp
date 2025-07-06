#include <iostream>

int main()
{
    short int var1{10};
    short int var2{20};

    char var3{40};
    char var4{50};

    std::cout << "var1 size: " << sizeof(var1) << std::endl;
    std::cout << "var2 size: " << sizeof(var2) << std::endl;
    std::cout << "var3 size: " << sizeof(var3) << std::endl;
    std::cout << "var4 size: " << sizeof(var4) << std::endl;

    std::cout << "-------------" << std::endl;
    auto result1 = var1 + var2; // converts to int, does addition, result is int
    auto result2 = var3 + var4; // converts to int, does addition, result is int

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result1 size: " << sizeof(result1) << std::endl;
    std::cout << "result2: " << result2 << std::endl;
    std::cout << "result2 size: " << sizeof(result2) << std::endl;

    return 0;
}
