#include <iostream>
#include "person.h"

//====================================================================

// variable: declare and define
double weight{};
// double weight{}; // error: on one define

//====================================================================

double add(double a, double b); // need declare function first so compiler knows type of mem to prep for (can define function here too)

//====================================================================

struct Point
{
    double m_x{};
    double m_y{};
};

// // error: multi class in same translation unit
// struct Point
// {
//     double m_x{};
//     double m_y{};
// };

//====================================================================

// int Person::person_count = 8; // error: multi def of person_count (in some_other_file.cpp)

// Person::Person(const std::string &names_param, int age_param) : full_name{names_param}, age{age_param} // error: multi def of Person constructor ( in some_other_file.cpp)
// {
//     ++person_count;
// }

//====================================================================

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== declare ==============" << std::endl;

    double result = add(10, 20);
    Point p1;
    Person p2("John Joe", 35);

    std::cout << "result: " << result << std::endl;
    std::cout << "p1.x: " << p1.m_x << std::endl;
    std::cout << "p1.y: " << p1.m_y << std::endl;
    p2.print_info();

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}

//====================================================================

double add(double a, double b)
{
    return a + b;
}

// //error: double declare
// double add(double a, double b)
// {
//     return a + b;
// }

//====================================================================