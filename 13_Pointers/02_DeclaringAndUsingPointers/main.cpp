#include <iostream>

int main()
{
    // declare and init pointer
    // * can go left, mid, or right. VScode auto formats to right
    int *p_number{}; // advise: init with nullptr (automatic with braced)
    double *p_fraction_number{};

    // init with nullptr
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    // pointers of diff variables are of the same size (just and address)
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(double): " << sizeof(double) << std::endl;
    std::cout << "sizeof(double*): " << sizeof(double *) << std::endl; // pointer
    std::cout << "sizeof(int*): " << sizeof(int *) << std::endl;       // pointer
    std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << std::endl;

    //========================================================================================================

    // can do like this, but confusing
    int *p_number5{}, other_int_var{};  // declares pointer and then int
    int *p_number6{}, other_int_var6{}; // declares pointer and then int

    std::cout << "============ inline declarations =============" << std::endl;
    std::cout << "sizeof(p_number5): " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var): " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6): " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6): " << sizeof(other_int_var6) << std::endl;

    // this is better/clearer
    int *p_number7{};
    int other_int_var7{};

    //========================================================================================================

    std::cout << "============ init and assign =============" << std::endl;
    int int_var{43};
    int *p_int{&int_var};

    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "p_int (address in mem): " << p_int << std::endl; // prints in hexidecimal
    std::cout << "&int_var: " << &int_var << std::endl;

    std::cout << "============ overwrite address =============" << std::endl;
    int int_var1{65};
    p_int = &int_var1;

    std::cout << "p_int (diff address): " << p_int << std::endl;

    // std::cout << "============ cross assign =============" << std::endl;
    // int *p_int1{nullptr};
    // double double_var{33};

    // p_int1 = &double_var; // compile error

    //========================================================================================================

    std::cout << "============ dereferencing a pointer =============" << std::endl;
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "value: " << *p_int2 << std::endl;

    return 0;
}
