#include <iostream>

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== capture list by value ==============" << std::endl;

    int c{42};

    // auto func = []()
    // {
    //     std::cout << "inner c: " << c << std::endl; // error: an enclosing-function local variable cannot be referenced in a lambda body unless it is in the capture list
    // };

    // capture list in [] to use var in lambda (lambda like a type)
    auto func = [c]()
    {
        std::cout << "inner c: " << c << std::endl; // inner stays the same. c is a copy (capture by value)
        std::cout << "inner &c: " << &c << std::endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        std::cout << "outer c: " << c << std::endl; // outer c increments
        std::cout << "outer &c: " << &c << std::endl;
        func();
        std::cout << "----------------------------" << std::endl;
        c++;
    }
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== capture list by ref ==============" << std::endl;

    c = 42;

    // &ref
    auto func1 = [&c]()
    {
        std::cout << "inner c: " << c << std::endl; // changes; c is a ref (passing address to original c)
        std::cout << "inner &c: " << &c << std::endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        std::cout << "outer c: " << c << std::endl; // outer c increments
        std::cout << "outer &c: " << &c << std::endl;
        func1();
        std::cout << "----------------------------" << std::endl;
        c++;
    }

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
