#include <iostream>

int main()
{
    int number1{65};
    int number2{60};

    std::cout << "===== conditional =====" << std::endl;

    bool result = (number1 < number2); // expression of the condition
    std::cout << std::boolalpha << "result: " << result << std::endl;

    // ==============================================================================================
    std::cout << "===== if =====" << std::endl;

    // checks result of conditional
    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    if (!(result == true))
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    // ==============================================================================================
    std::cout << "===== else =====" << std::endl;

    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    // ==============================================================================================
    std::cout << "===== expression condition =====" << std::endl;

    if (number1 < number2)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    // ==============================================================================================
    std::cout << "===== nesting =====" << std::endl;

    bool red = false;
    bool green{true};
    bool yellow{false};
    bool police_stop{true};

    // ===============
    // ex:1
    // ===============
    // if (red)
    // {
    //     std::cout << "Stop" << std::endl;
    // }
    // if (yellow)
    // {
    //     std::cout << "Stop" << std::endl;
    // }
    // if (green)
    // {
    //     std::cout << "Go" << std::endl;
    // }

    // // ===============
    // // ex:2
    // // ===============
    // std::cout << "Police: \"Stop!\"" << std::endl;

    // if (green)
    // {
    //     if (police_stop)
    //     {
    //         std::cout << "Stop" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "Go" << std::endl;
    //     }
    // }

    // ===============
    // ex:3
    // ===============
    std::cout << "Police: \"Stop!\"" << std::endl;

    if (green && !police_stop)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Stop" << std::endl;
    }

    return 0;
}
