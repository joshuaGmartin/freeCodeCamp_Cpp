#include <iostream>

void say_age(int *age);

int main()
{
    int age{23};
    std::cout << "outside age: " << age << std::endl;
    std::cout << "outside &age: " << &age << std::endl;
    say_age(&age); // passing address
    std::cout << "outside age: " << age << std::endl;
    std::cout << "outside &age: " << &age << std::endl;
    // this age DOES change, because passed pointer to this age var

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}

void say_age(int *age) // parameter is pointer, lets you change var out of function scope
{
    // *age++; // increments pointer via pointer arithmetic, need ()
    (*age)++;
    std::cout << "----------------------------" << std::endl;
    std::cout << "inside age: " << age << std::endl;
    std::cout << "inside *age: " << *age << std::endl;
    std::cout << "inside &age: " << &age << std::endl;
    std::cout << "----------------------------" << std::endl;
}