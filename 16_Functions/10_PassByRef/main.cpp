#include <iostream>

void say_age(int &age);

int main()
{
    int age{23};
    std::cout << "outside age: " << age << std::endl;
    std::cout << "outside &age: " << &age << std::endl;
    say_age(age); // just pass the var, functions makes the reference
    std::cout << "outside age: " << age << std::endl;
    std::cout << "outside &age: " << &age << std::endl;
    // this age DOES change, because passed pointer to this age var

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}

void say_age(int &age) // parameter is a reference, lets you change original var directly
{
    age++; // no dereference needed
    std::cout << "----------------------------" << std::endl;
    std::cout << "inside age: " << age << std::endl;
    std::cout << "inside &age: " << &age << std::endl;
    std::cout << "----------------------------" << std::endl;
}