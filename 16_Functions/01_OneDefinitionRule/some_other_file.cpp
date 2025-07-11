#include "person.h"

// double weight{}; // error: already defined in main.cpp

// // error: double declare
// double add(double a, double b)
// {
//     return a + b;
// }

// no error:
struct Point
{
    double m_x;
    double m_y;
};

//===========================================

int Person::person_count = 8;

Person::Person(const std::string &names_param, int age_param) : full_name{names_param}, age{age_param}
{
    ++person_count;
}

// // error: previous definition of ‘class Person’
// class Person
// {
// };