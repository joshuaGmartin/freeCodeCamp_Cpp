#include <iostream>
#include <iomanip>

int main()
{
    // ===============================================================
    // Precision
    // ===============================================================

    // // Declare and init vars
    // float number1{1.12345678901234567980f};       // Precision: 7
    // double number2{1.12345678901234567980};       // Precision: 17 (~15)
    // long double number3{1.12345678901234567890L}; // Precision: 20 (15+)

    // // Print size
    // std::cout << "float sizeof: " << sizeof(number1) << std::endl;
    // std::cout << "double sizeof: " << sizeof(number2) << std::endl;
    // std::cout << "long double sizeof: " << sizeof(number3) << std::endl;

    // // Precision
    // std::cout << std::setprecision(20);               // Control the precision of std::cout
    // std::cout << "number1: " << number1 << std::endl; // 7 digits
    // std::cout << "number2: " << number2 << std::endl; // 15'ish digits
    // std::cout << "number3: " << number3 << std::endl; // 15+ digits

    // ===============================================================
    // Float problems
    // ===============================================================

    // // Float problems: the precision is usually to limited for most applications
    // float float_number4{192400023.0f}; // Error: narrowing conversion with braced initialization? No, just chops and get garbage
    // double double_number4{192400023.0};
    // float float_number4_functional(192400023.0f);
    // float float_number4_assign = 192400023.0f;

    // std::cout << std::setprecision(20); // Control the precision of std::cout
    // std::cout << "float_number4: " << float_number4 << std::endl;
    // std::cout << "double_number4: " << double_number4 << std::endl;
    // std::cout << "float_number4_functional: " << float_number4_functional << std::endl;
    // std::cout << "float_number4_assign: " << float_number4_assign << std::endl;

    // ===============================================================
    // Scientific notation
    // ===============================================================

    // double number5{192400023};
    // double number6{1.92400023e8};
    // double number7{1.924e8};          // can omit the lower 00023 for simplicity (dependant on application)
    // double number8{0.00000000003498}; // prints in sci notation
    // double number9{3.498e-11};

    // std::cout << std::setprecision(20); // Control the precision of std::cout
    // std::cout << "number5 is: " << number5 << std::endl;
    // std::cout << "number6 is: " << number6 << std::endl;
    // std::cout << "number7 is: " << number7 << std::endl;
    // std::cout << "number8 is: " << number8 << std::endl;
    // std::cout << "number9 is: " << number9 << std::endl;

    // ===============================================================
    // Infinity and NaN
    // ===============================================================

    // double number10{5.6};
    double number10{-5.6};
    double number11{}; // init as 0
    double number12{}; // init as 0

    // Infinity
    double result{number10 / number11};

    std::cout << std::setprecision(20); // Control the precision of std::cout
    std::cout << number10 << "/" << number11 << " = " << result << std::endl;
    std::cout << result << "+" << number10 << " = " << result + number10 << std::endl;

    // NaN
    result = number11 / number12;

    std::cout << number11 << "/" << number12 << " = " << result << std::endl; // gets -nan (+/- nan dependant on compiler?)

    return 0;
}
