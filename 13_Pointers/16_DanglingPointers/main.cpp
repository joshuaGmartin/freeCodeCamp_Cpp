#include <iostream>

int main()
{
    std::cout << "============== uninitialized pointer ==============" << std::endl;
    int *p_number; // dangling uninitialized pointer

    std::cout << "p_number: " << p_number << std::endl;
    // std::cout << "*p_number: " << *p_number << std::endl; // runs mystery number; can crash

    std::cout << "runs" << std::endl;

    //======================================================================================

    std::cout << "============== deleted pointer ==============" << std::endl;
    int *p_number1{new int{67}};

    std::cout << "p_number1 (pre delete): " << p_number1 << std::endl;
    std::cout << "*p_number1 (pre delete): " << *p_number1 << std::endl;

    delete p_number1;

    std::cout << "p_number1 (post delete): " << p_number1 << std::endl;
    std::cout << "*p_number1 (post delete): " << *p_number1 << std::endl; // no longer our mem

    //======================================================================================

    std::cout << "============== multi pointers ==============" << std::endl;

    int *p_number3{new int{83}}; // master pointer
    int *p_number4{p_number3};   // point to pointer

    std::cout << "p_number3: " << p_number3 << std::endl;
    std::cout << "*p_number3: " << *p_number3 << std::endl;
    std::cout << "p_number4: " << p_number4 << std::endl;
    std::cout << "*p_number4: " << *p_number4 << std::endl;

    delete p_number3; // delete master

    // p_number4 refs deleted mem. Dereferencing this will give undefined behavior (crash, junk, etc)
    std::cout << "p_number4 (post delete): " << p_number4 << std::endl;
    std::cout << "*p_number4 (post delete): " << *p_number4 << std::endl; // junk

    //======================================================================================

    std::cout << "============== nullptr solution ==============" << std::endl;

    int *p_number6{new int{87}};
    // int *p_number6{nullptr};

    // check for nullptr before use
    // std::cout << "*p_number6: " << *p_number6 << std::endl; // crash without check (if nullptr)
    if (p_number6 != nullptr)
    {
        std::cout << "*p_number6: " << *p_number6 << std::endl;
    }
    else
    {
        std::cout << "Error: invalid address!" << std::endl;
    }

    delete p_number6;

    //======================================================================================

    std::cout << "============== deleted pointer solution ==============" << std::endl;

    int *p_number7{new int{82}};

    std::cout << "p_number7: " << p_number7 << std::endl;
    std::cout << "*p_number7: " << *p_number7 << std::endl;

    delete p_number7;
    p_number7 = nullptr; // reset

    if (p_number7 != nullptr)
    {
        std::cout << "*p_number7: " << *p_number7 << std::endl;
    }
    else
    {
        std::cout << "Error: Invalid memory access!" << std::endl;
    }

    //======================================================================================

    std::cout << "============== multi pointers solution ==============" << std::endl;

    int *p_number8{new int{382}}; // master
    int *p_number9{p_number8};    // slave

    std::cout << "p_number8: " << p_number8 << std::endl;
    std::cout << "*p_number8: " << *p_number8 << std::endl;

    // only use slave pointers if master is valid
    if (p_number8 != nullptr)
    {
        std::cout << "p_number9: " << p_number9 << std::endl;
        std::cout << "*p_number9: " << *p_number9 << std::endl;
    }

    delete p_number8; // master releases mem
    p_number8 = nullptr;

    // only use slave pointers if master is valid
    if (p_number8 != nullptr)
    {
        std::cout << "p_number9: " << p_number9 << std::endl;
        std::cout << "*p_number9: " << *p_number9 << std::endl;
    }
    else
    {
        std::cout << "Invalid pointer!" << std::endl;
    }

    //======================================================================================

    std::cout << "runs" << std::endl; // may crash (depending on non-allocated mem)

    return 0;
}
