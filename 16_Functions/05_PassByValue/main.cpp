#include <iostream>

void say_age(int age)
{
    age++; // in function scope
    std::cout << "----------------------------" << std::endl;
    std::cout << "inside age: " << age << std::endl;
    std::cout << "inside &age: " << &age << std::endl;
    std::cout << "----------------------------" << std::endl;
}

int main()
{
    int age{23}; // out of say_age function scope (diff address)
    std::cout << "outside age: " << age << std::endl;
    std::cout << "outside &age: " << &age << std::endl;
    say_age(age);
    std::cout << "outside age: " << age << std::endl;
    std::cout << "outside &age: " << &age << std::endl;
    // this age no change

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
