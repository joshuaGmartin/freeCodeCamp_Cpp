#include <iostream>
#include "compare.h" // preprocessor (copy/paste from file to here)
#include "operations.h"

// much cleaner

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
    std::cout << "----------------------------" << std::endl;
    std::cout << "runs" << std::endl;

    return 0;
}
