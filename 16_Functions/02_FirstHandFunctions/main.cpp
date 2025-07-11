#include <iostream>

// must declare functions before main()

// age could be size_t also
void enter_bar(unsigned int age) // declare parameters
{
    if (age >= 18)
    {
        std::cout << "You are " << age << ". Enter the bar." << std::endl;
    }
    else
    {
        std::cout << "You are only " << age << ". Go away." << std::endl;
    }

    // return; // not needed
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void say_hello()
{
    std::cout << "Goodbye!" << std::endl;
}

int lucky_number()
{
    return 13;
}

// void max(int a, int b) // error: same signature as int max()
// int max(int a, int b) // error: duplicate
// int max(int d, int e) // error: same signature as int max()
// {
//     return;
// }

double increment_multiply(double c, double d)
{
    std::cout << "inside c before: " << c << std::endl;
    std::cout << "inside d before: " << d << std::endl;

    double result = ++c * ++d;

    std::cout << "inside c after: " << c << std::endl;
    std::cout << "inside d after: " << d << std::endl;

    return result;
}

int main()
{
    std::cout << "-------------- enter bar --------------" << std::endl;
    for (size_t i{16}; i < 20; i++)
    {
        // implicit conversion from size_t
        enter_bar(i); // pass arguments
    }

    std::cout << "-------------- max --------------" << std::endl;
    int max_num = max(50, 8);
    int a{34};
    int b{43};
    max_num = max(a, b);
    std::cout << "max is: " << max_num << std::endl;

    std::cout << "-------------- hello --------------" << std::endl;
    say_hello();

    std::cout << "-------------- lucky number --------------" << std::endl;
    std::cout << "Your lucky number is: " << lucky_number() << std::endl;
    int luck_num{};
    luck_num = lucky_number() + 1;
    std::cout << "Your lucky number is: " << luck_num << std::endl;

    std::cout << "-------------- increment and multiply --------------" << std::endl;
    double c = 2.00;
    double d = 4.00;

    std::cout << "outside c before: " << c << std::endl;
    std::cout << "outside d before: " << d << std::endl;

    double result = increment_multiply(c, d);
    std::cout << "result: " << result << std::endl;

    std::cout << "outside c after: " << c << std::endl;
    std::cout << "outside d after: " << d << std::endl;

    std::cout << "-------------- runs? --------------" << std::endl;
    std::cout << "runs" << std::endl;

    return 0;
}
