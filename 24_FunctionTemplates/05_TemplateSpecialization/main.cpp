#include <iostream>
#include <cstring>

// normal template
template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

// template specialization
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== normal template  ==============" << std::endl;

    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"hello"}; // compares lexicographically
    std::string f{"world"};

    auto max_int = maximum(a, b);    // int type deduced
    auto max_double = maximum(c, d); // double type deduced
    auto max_str = maximum(e, f);    // string type deduced

    std::cout << "max_int: " << max_int << std::endl;
    std::cout << "max_double: " << max_double << std::endl;
    std::cout << "max_str: " << max_str << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============== const char * template  ==============" << std::endl;

    const char *g{"wild"};
    const char *h{"animal"};

    // passes args as (const char *). Issue: compares pointer (address), no value
    // needs a special template that recognizes and handles const char * type
    auto result = maximum(g, h);

    std::cout << "max const char *: " << result << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "runs" << std::endl;
    return 0;
}
