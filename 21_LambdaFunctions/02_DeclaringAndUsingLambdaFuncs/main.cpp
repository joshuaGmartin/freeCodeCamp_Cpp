#include <iostream>

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== lambda ==============" << std::endl;

    // syntax
    // lambda func signature = [capture list](parameters){ code }; // base
    // lambda func signature = [capture list](parameters)->return type{ code }; // with return type
    // lambda func signature = [capture list](parameters){ code }(); //IIFE

    // declare handle
    auto func = []()
    {
        std::cout << "Hello!" << std::endl;
    };
    func(); // call

    std::cout << "----------------------------" << std::endl;

    // iife (no name)
    []()
    {
        std::cout << "Hello!" << std::endl;
    }(); // call

    //====================================================================

    std::cout << std::endl;
    std::cout << "============= lambda with params ===============" << std::endl;

    // with params
    [](double a, double b)
    {
        std::cout << "a + b: " << (a + b) << std::endl;
    }(1.11, 2.22); // call with two double literals

    std::cout << "----------------------------" << std::endl;

    // with params and name
    auto func1 = [](double a, double b)
    {
        std::cout << "a + b: " << (a + b) << std::endl;
    };
    func1(2.22, 3.33);
    func1(3.33, 4.44);

    //====================================================================

    std::cout << std::endl;
    std::cout << "============= lambda with return ===============" << std::endl;

    auto result = [](double a, double b)
    {
        return a + b;
    }(1.23, 2.34);

    std::cout << "result: " << result << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============= inline lambda ===============" << std::endl;

    std::cout << "result: " << [](double a, double b)
    {
        return a + b;
    }(3.33, 4.44)
              << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============== with vars ==============" << std::endl;

    auto func2 = [](double a, double b)
    {
        return a + b;
    };

    auto result1 = func2(12, 23);
    auto result2 = func2(34, 45);

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result2: " << result2 << std::endl;
    std::cout << "direct call: " << func2(45, 56) << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============== return type ==============" << std::endl;

    auto func3 = [](double a, double b) -> int // force type; narrowing conversion
    {
        return a + b;
    };

    auto func4 = [](double a, double b)
    {
        return a + b;
    };

    double a{6.9};
    double b{3.5};

    auto result3 = func3(a, b);
    auto result4 = func4(a, b);

    std::cout << "result3: " << result3 << std::endl;
    std::cout << "result4: " << result4 << std::endl;
    std::cout << "sizeof(result3): " << sizeof(result3) << std::endl; // int
    std::cout << "sizeof(result4): " << sizeof(result4) << std::endl; // double

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
