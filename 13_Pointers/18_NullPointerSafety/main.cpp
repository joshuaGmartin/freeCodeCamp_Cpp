#include <iostream>

int main()
{
    std::cout << "============== nullptr check ==============" << std::endl;

    int *p_number{};
    // p_number = new int{7};'

    if (p_number) // works also
    // if (!(p_number == nullptr))
    {
        std::cout << "p_number points to VALID address: " << p_number << std::endl;
        std::cout << "*p_number: " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to INVALID address" << std::endl;
    }

    delete p_number;
    p_number = nullptr;

    //====================================================================

    std::cout << "============== nullptr delete ==============" << std::endl;

    int *p_number1{};
    delete p_number1; // can call delete if nullptr, no need check

    //====================================================================

    std::cout << "runs" << std::endl;

    return 0;
}
