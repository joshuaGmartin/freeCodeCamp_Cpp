#include <iostream>

int max(int a, int b);      // Function declaration or "prototype". Function signature doesn't include return type
int min(int a, int b);      // get min
int inc_mult(int a, int b); // inc and mult

// // dont need parameter names to declare (c++ just needs to know type for mem)
// int max(int, int);
// int min(int, int);
// int inc_mult(int, int);

int main()
{
    std::cout << "============== funcs ==============" << std::endl;

    int x{5};
    int y{2};
    int max_result = max(x, y);
    int min_result = min(x, y);
    int inc_mult_result = inc_mult(x, y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "min: " << min_result << std::endl;
    std::cout << "max: " << max_result << std::endl;
    std::cout << "inc_mult_result: " << inc_mult_result << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "runs" << std::endl;

    return 0;
}

// Function definition comes after main() for nice looking code
int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int inc_mult(int a, int b)
{
    return ++a * ++b;
}