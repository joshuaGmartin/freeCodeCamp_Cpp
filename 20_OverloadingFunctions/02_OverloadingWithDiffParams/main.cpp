#include <iostream>

// overload by chaning types on the inputs; treated as different functions
int max(int a, int b)
{
    std::cout << "int overload called" << std::endl;
    return a > b ? a : b;
}

// double max(int a, int b) // error: return type not part of function signature
// {
//     return a > b ? a : b;
// }

double max(double a, double b)
{
    std::cout << "double overload called" << std::endl;
    return a > b ? a : b;
}

double max(int a, double b)
{
    std::cout << "int/double overload called" << std::endl;
    return a > b ? a : b;
}

std::string_view max(std::string_view a, std::string_view b)
{
    std::cout << "string_view overload called" << std::endl;
    return a > b ? a : b;
}

double max(int a, int b, int c)
{
    std::cout << "int int int overload called" << std::endl;
    return a > b ? a : b;
}

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== declare ==============" << std::endl;

    int int_x{1};
    int int_y{2};
    double db_x{1.11};
    double db_y{2.22};
    std::string_view str_x{"hello"};
    std::string_view str_y{"world"};

    // C++ looks at parameters to determine function call
    max(int_x, int_y);
    max(db_x, db_y);
    max(int_x, db_y); // int, db is another valid overload
    max(str_x, str_y);
    std::cout << "----------------------------" << std::endl;
    max(2, 3);
    max(2, 3, 4); // params are different: valid overload
    max(2.22, 3.33);
    max(2, 3.33);
    max("apple", "banana"); // works via implicit conversion: from string literal to string_view type

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
