#include <iostream>

// template <typename T>
// T maximum(T a, T b); // Declaration

template <typename T>
const T &maximum(const T &a, const T &b); // no change inputs (const)

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== template ref params ==============" << std::endl;

    double a{23.5};
    double b{51.2};

    auto result = maximum(a, b); // cant overload templates with refs, confused compiler: are you passing a the var or a the ref?
                                 // error: call of overloaded ‘maximum(double&, double&)’ is ambiguous

    // no & in template params
    // std::cout << "outside &a: " << &a << std::endl; // diff outside address (passing by value)

    // & in template params
    std::cout << "outside &a: " << &a << std::endl; // same outside address (passing by ref)

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "runs" << std::endl;
    return 0;
}

// template <typename T>
// T maximum(T a, T b)
// {
//     std::cout << "inside &a: " << &a << std::endl;
//     return a > b ? a : b;
// }

template <typename T>
const T &maximum(const T &a, const T &b)
{
    // ++a; // error: const
    std::cout << "inside &a: " << &a << std::endl;
    return a > b ? a : b;
}
