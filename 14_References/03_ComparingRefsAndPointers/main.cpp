#include <iostream>

int main()
{
    //====================================================================
    std::cout << std::endl;
    std::cout << "============== declare ==============" << std::endl;

    double double_value{12.34};
    // double &ref_double_value{}; // error: ref must be init to lvalue (has address) when declare
    double &ref_double_value{double_value};
    double *p_double_value{&double_value};

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== write via pointer ==============" << std::endl;

    *p_double_value = 15.44;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== write via ref ==============" << std::endl;

    ref_double_value = 18.44;

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== change ref ==============" << std::endl;

    double some_other_double = 78.45;
    ref_double_value = some_other_double; // changes original, but nicer looking

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== change pointer address ==============" << std::endl;

    p_double_value = &some_other_double; // changes pointer, but ugly

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl; // but same value as double value (previously changed to 78.45)
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl; // diff address

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== change pointer value ==============" << std::endl;

    *p_double_value = 555.5; // changes pointer, but ugly

    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl; // but diff value
    std::cout << "&double_value: " << &double_value << std::endl;
    std::cout << "&ref_double_value: " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl; // same changed address

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== run check ==============" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
