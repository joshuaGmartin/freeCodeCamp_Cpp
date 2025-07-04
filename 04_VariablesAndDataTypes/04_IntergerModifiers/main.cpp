#include <iostream>

int main()
{
    //===================================================================================
    // Positive and Negative
    //===================================================================================

    // signed int value1{10};
    // signed int value2{-300};

    // std::cout << "Value 1: " << value1 << std::endl;
    // std::cout << "sizeof(value1): " << sizeof(value1) << std::endl; // 4
    // std::cout << "Value 2: " << value2 << std::endl;
    // std::cout << "sizeof(value2): " << sizeof(value2) << std::endl; // 4

    // unsigned int value3{4};
    // std::cout << "Value 3: " << value3 << std::endl;
    // std::cout << "sizeof(value3): " << sizeof(value3) << std::endl; // 4
    // // unsigned int value4{-5}; // compiler error

    //===================================================================================
    // Long and short
    //===================================================================================

    std::cout << "=========================== 2 bytes =============================" << std::endl;

    short short_var{-32768};                    // 2 bytes
    short int short_int{455};                   //
    signed short signed_short{122};             //
    signed short int signed_short_int{-456};    //
    unsigned short int unsigned_short_int{456}; //

    std::cout << "short_var: " << short_var << " | size: " << sizeof(short_var) << std::endl;
    std::cout << "short_int: " << short_int << " | size: " << sizeof(short_int) << std::endl;
    std::cout << "signed_short: " << signed_short << " | size: " << sizeof(signed_short) << std::endl;
    std::cout << "signed_short_int: " << signed_short_int << " | size: " << sizeof(signed_short_int) << std::endl;
    std::cout << "unsigned_short_int: " << unsigned_short_int << " | size: " << sizeof(unsigned_short_int) << std::endl;

    std::cout << "=========================== 4 bytes =============================" << std::endl;

    int int_var{55};               // 4 bytes
    signed signed_var{66};         //
    signed int signed_int{77};     //
    unsigned int unsigned_int{77}; //

    std::cout << "int_var: " << int_var << " | size: " << sizeof(int_var) << std::endl;
    std::cout << "signed_var: " << signed_var << " | size: " << sizeof(signed_var) << std::endl;
    std::cout << "signed_int: " << signed_int << " | size: " << sizeof(signed_int) << std::endl;
    std::cout << "unsigned_int: " << unsigned_int << " | size: " << sizeof(unsigned_int) << std::endl;

    std::cout << "=========================== 4 or 8 bytes =============================" << std::endl;

    long long_var{88};                       // 4 or 8 bytes
    long int long_int{33};                   //
    signed long singed_long{44};             //
    signed long int signed_long_int{44};     //
    unsigned long int unsigned_long_int{44}; //

    std::cout << "long_var: " << long_var << " | size: " << sizeof(long_var) << std::endl;
    std::cout << "long_int: " << long_int << " | size: " << sizeof(long_int) << std::endl;
    std::cout << "singed_long: " << singed_long << " | size: " << sizeof(singed_long) << std::endl;
    std::cout << "signed_long_int: " << signed_long_int << " | size: " << sizeof(signed_long_int) << std::endl;
    std::cout << "unsigned_long_int: " << unsigned_long_int << " | size: " << sizeof(unsigned_long_int) << std::endl;

    std::cout << "=========================== 8 bytes =============================" << std::endl;

    long long long_long{888};                            // 8 bytes
    long long int long_long_int{999};                    //
    signed long long signed_long_long{444};              //
    signed long long int signed_long_long_int{1243};     //
    unsigned long long int unsigned_long_long_int{1234}; //

    std::cout << "long_long: " << long_long << " | size: " << sizeof(long_long) << std::endl;
    std::cout << "long_long_int: " << long_long_int << " | size: " << sizeof(long_long_int) << std::endl;
    std::cout << "signed_long_long: " << signed_long_long << " | size: " << sizeof(signed_long_long) << std::endl;
    std::cout << "signed_long_long_int: " << signed_long_long_int << " | size: " << sizeof(signed_long_long_int) << std::endl;
    std::cout << "unsigned_long_long_int: " << unsigned_long_long_int << " | size: " << sizeof(unsigned_long_long_int) << std::endl;

    return 0;
}
