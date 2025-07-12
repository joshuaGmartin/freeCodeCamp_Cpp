#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== template deduction ==============" << std::endl;

    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"hello"};
    std::string f{"world"};

    // auto max = maximum(a, b); // compiler looks at input types
    // auto max = maximum(c, d);
    // auto max = maximum(e, f);
    // auto max = maximum(a, d); // error: deduced conflicting types for parameter ‘T’ (‘int’ and ‘double’)

    // std::cout << "max: " << max << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============== explicit template args ==============" << std::endl;

    // auto max = maximum<double>(a, b);
    // auto max = maximum<double>(c, d);
    auto max = maximum<double>(a, d); // no error: compiler does implicit conversion from int to double type for "a"
    // auto max = maximum<double>(e, f); // error: cannot convert string to double

    std::cout << "max: " << max << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "runs" << std::endl;
    return 0;
}
