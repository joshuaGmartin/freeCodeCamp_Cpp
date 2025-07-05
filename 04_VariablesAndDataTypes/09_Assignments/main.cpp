#include <iostream>

// assign values after declaration
int main()
{
    int var1{123}; // init and declare
    std::cout << "var1: " << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "var1: " << var1 << std::endl;

    std::cout << "===================================" << std::endl;

    double var2{44.55}; // init and declare
    std::cout << "var2: " << var2 << std::endl;

    var2 = 99.99; // Assign
    std::cout << "var2: " << var2 << std::endl;

    std::cout << "===================================" << std::endl;

    bool state1{false}; // init and declare
    std::cout << std::boolalpha;
    std::cout << "state1: " << state1 << std::endl;

    state1 = true; // assign
    std::cout << "state1: " << state1 << std::endl;

    std::cout << "===================================" << std::endl;

    // be careful with reassigning on autos
    auto var3{333u}; // declare and init with type deduction (unsigned int)
    std::cout << "var3: " << var3 << std::endl;

    var3 = -22;                                 // assigning a negative: WARNING! (Signed int)
    std::cout << "var3: " << var3 << std::endl; // 4294967274 (silent garbage)

    return 0;
}
