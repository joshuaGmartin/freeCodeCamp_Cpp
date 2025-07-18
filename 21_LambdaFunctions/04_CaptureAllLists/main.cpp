#include <iostream>

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== capture all list by value ==============" << std::endl;

    int c{42};
    int d{5};

    // [=] captures all by val
    auto func = [=]()
    {
        std::cout << "inner c: " << c << std::endl; // inner stays the same. c is a copy (capture by value)
        std::cout << "inner &c: " << &c << std::endl;
        std::cout << "inner d: " << d << std::endl; // inner stays the same. c is a copy (capture by value)
        std::cout << "inner &d: " << &d << std::endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        std::cout << "outer c: " << c << std::endl; // outer c increments
        std::cout << "outer &c: " << &c << std::endl;
        std::cout << "inner d: " << d << std::endl; // inner stays the same. c is a copy (capture by value)
        std::cout << "inner &d: " << &d << std::endl;
        func();
        std::cout << "----------------------------" << std::endl;
        c++;
    }
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== capture all list by ref ==============" << std::endl;

    c = 42; // reset

    // [&] captures all by ref
    auto func1 = [&]()
    {
        std::cout << "inner c: " << c << std::endl; // changes; c is a ref (passing address to original c)
        std::cout << "inner &c: " << &c << std::endl;
        std::cout << "inner d: " << d << std::endl; // inner stays the same. c is a copy (capture by value)
        std::cout << "inner &d: " << &d << std::endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        std::cout << "outer c: " << c << std::endl; // outer c increments
        std::cout << "outer &c: " << &c << std::endl;
        std::cout << "inner d: " << d << std::endl; // inner stays the same. c is a copy (capture by value)
        std::cout << "inner &d: " << &d << std::endl;
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
