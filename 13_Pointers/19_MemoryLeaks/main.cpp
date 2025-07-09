#include <iostream>

int main()
{
    //====================================================================

    std::cout << "============== mem leak example ==============" << std::endl;

    int *p_number{new int{67}}; // points to address1

    // should delete and reset here

    int number{55};

    p_number = &number; // p_number now points to address2, address1 still exists but pointer to it is lost. Mem leak

    //====================================================================

    std::cout << "============== mem leak example: double allocation ==============" << std::endl;

    int *p_number1{new int{55}};

    // use pointer

    // should delete and reset here

    p_number1 = new int{44}; // memory with int{55} leaked

    delete p_number1; // does not release int{55}
    p_number1 = nullptr;

    //====================================================================

    std::cout << "============== mem leak example: nested scope ==============" << std::endl;

    {
        int *p_number2{new int{57}};

        // use pointer

        // should delete and reset here
    }
    // mem with int{57} leaked (key lost inside of the scope)

    // delete p_number2; // compile error: var not declared

    //====================================================================

    std::cout << "runs" << std::endl;

    return 0;
}
