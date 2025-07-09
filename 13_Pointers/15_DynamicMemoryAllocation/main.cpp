#include <iostream>

int main()
{
    std::cout << "============= pointers practice =============" << std::endl;

    int number{22};
    // int *p_number{&number};
    int *p_number = &number;

    std::cout << "number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    int *p_number1; // uninitialized pointer, contains garbage
    int number1{12};
    p_number1 = &number1; // make point to a valid address
    std::cout << "uninit pointer *p_number1: " << *p_number1 << std::endl;

    // =========================================================================

    // std::cout << "============= bad stuff =============" << std::endl;

    // // writing to uninitialized pointer via dereference
    // int *p_number2;  // no init, has junk address
    // *p_number2 = 55; // writing to junk address through dereference: NO!!! Address could be being used by another program, like the OS

    // std::cout << "junk pointer p_number2: " << p_number2 << std::endl;
    // std::cout << "*p_number2: " << *p_number2 << std::endl; // reading from junk address

    // int *p_number3{}; // init with pointer equivalent of zero: nullptr (a pointer pointing to nowhere)
    // // int * p_number3{nullptr}; // also works
    // *p_number3 = 33; // writing to a pointer of nothing: BAD, crash

    // // program never reachers this point
    // std::cout << "null pointer p_number3: " << p_number3 << std::endl;
    // std::cout << "*p_number3: " << *p_number3 << std::endl; // reading from junk address

    // =========================================================================

    std::cout << "============= dynamic heap mem =============" << std::endl;

    int *p_number4{nullptr};
    p_number4 = new int; // dynamically allocates space for single int on the heap (mem belongs to program till we return it).
    // p_number4 now points to this allocation

    *p_number4 = 77; // write to dynamically allocated memory

    std::cout << "p_number4: " << p_number4 << std::endl;
    std::cout << "*p_number4: " << *p_number4 << std::endl; // reading from junk address

    delete p_number4; // return memory to OS (fix mem leak)
    // *p_number4 = 45;  // BAD: writing to non-owned memory
    p_number4 = nullptr; // good practice: reset your pointers

    // =========================================================================

    std::cout << "============= init point with valid address =============" << std::endl;

    // no always need nullptr
    int *p_number5{new int};     // allocated mem location holds junk
    int *p_number6{new int(22)}; // direct initialization
    int *p_number7{new int{23}}; // uniform initialization

    std::cout << "p_number5: " << p_number5 << std::endl;
    std::cout << "*p_number5: " << *p_number5 << std::endl; // junk value
    std::cout << "p_number6: " << p_number6 << std::endl;
    std::cout << "*p_number6: " << *p_number6 << std::endl;
    std::cout << "p_number7: " << p_number7 << std::endl;
    std::cout << "*p_number7: " << *p_number7 << std::endl;

    delete p_number5;
    p_number5 = nullptr;
    delete p_number6;
    p_number6 = nullptr;
    delete p_number7;
    p_number7 = nullptr;

    // can still reuse existing pointers
    p_number5 = new int{81};
    std::cout << "*p_number5: " << p_number5 << std::endl;

    delete p_number5;
    // delete p_number5; // BAD. Dont delete twice! Crash
    p_number5 = nullptr;

    return 0;
}
