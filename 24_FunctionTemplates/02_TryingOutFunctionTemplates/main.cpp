#include <iostream>
#include <string>

//====================================================================
// // bad way

// // not DRY
// int maximum(int a, int b)
// {
//     return a > b ? a : b;
// }

// std::string maximum(const std::string &a, const std::string &b)
// {
//     return a > b ? a : b;
// }

// long long int maximum(long long int a, long long int b)
// {
//     return a > b ? a : b;
// }

//====================================================================

// a blueprint to over multi function overloads
template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

// no work on strings
template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== func temp ==============" << std::endl;

    // compiler converts "T" into the type in the template function call
    auto result1 = maximum(2, 3);
    auto result2 = maximum(2.22, 3.33);
    // auto result22 = maximum(int{2}, 3.33); // param types must be the same for templates
    auto result3 = maximum(std::string{"apple"}, std::string{"banana"});

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result2: " << result2 << std::endl;
    std::cout << "result3: " << result3 << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============== func temp issue ==============" << std::endl;

    // compiler converts "T" into the type in the template function call
    auto result4 = multiply(2, 3);
    auto result5 = multiply(2.22, 3.33);
    // auto result6 = multiply(std::string{"apple"}, std::string{"banana"}); // error: no match for ‘operator*’

    std::cout << "result4: " << result4 << std::endl;
    std::cout << "result5: " << result5 << std::endl;
    // std::cout << "result6: " << result6 << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============== func temp pointers ==============" << std::endl;

    int x{7};
    int y{5};

    int *p_x{&x};
    int *p_y{&y};

    auto result6 = maximum(p_x, p_y); // issue: comparison is occurring on the pointers (addresses)

    std::cout << "result6: " << result6 << std::endl;
    std::cout << "*result6: " << *result6 << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "runs" << std::endl;
    return 0;
}
