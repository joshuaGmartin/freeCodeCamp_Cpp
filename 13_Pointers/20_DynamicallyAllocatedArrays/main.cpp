#include <iostream>

int main()
{
    //====================================================================

    std::cout << "============== new array ==============" << std::endl;

    size_t size{10}; // for static array on stack, size must be const

    // ways to  declare arrays dynamically
    double *p_salaries{new double[size]};                             // salaries will contain junk values
    int *p_students{new (std::nothrow) int[size]{}};                  // all values init to zero
    double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}}; // allocating mem space for array of size double. First five will be give, rest will be zeros

    //====================================================================

    std::cout << "============== value check ==============" << std::endl;

    std::cout << "p_scores: " << p_scores << std::endl;
    std::cout << "*p_scores: " << *p_scores << std::endl;
    // std::cout << "*p_scores[0]: " << *p_scores[0] << std::endl; // error
    std::cout << "p_scores[0]: " << p_scores[0] << std::endl;
    std::cout << "p_scores[1]: " << p_scores[1] << std::endl;
    std::cout << "p_scores + 1: " << (p_scores + 1) << std::endl; // address
    std::cout << "*p_scores + 1: " << *(p_scores + 1) << std::endl;

    //====================================================================

    std::cout << "============== print array ==============" << std::endl;

    // check nullptr
    if (p_scores)
    {
        std::cout << "size of scores (reg pointer): " << sizeof(p_scores) << std::endl;
        std::cout << "mem alllocation for scores done" << std::endl;

        // print out elements with reg array access notation or pointer arithmetic (pointers don't know the size of the thing they point to)
        for (size_t i{}; i < size; i++)
        {
            std::cout << "score" << i << ": " << p_scores[i] << std::endl;
        }
    }

    //====================================================================

    std::cout << "============== delete array pointers ==============" << std::endl;

    delete[] p_salaries;
    p_salaries = nullptr;
    delete[] p_students;
    p_students = nullptr;
    delete[] p_scores;
    p_scores = nullptr;

    //====================================================================

    std::cout << "============== static vs dynamic arrays ==============" << std::endl;

    std::cout << "============== static (lives on stack) ==============" << std::endl;

    int scores[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "scores size: " << std::size(scores) << std::endl; // static works with size()

    for (auto s : scores) // static works with range based loops (C++ knows size)
    {
        std::cout << "score: " << s << std::endl;
    }

    //================================
    std::cout << "============== dynamic (lives on heap) ==============" << std::endl;

    int *p_scores1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // std::cout << "scores size: " << std::size(p_scores1) << std::endl; // error with size(): pointer, not array

    // for (auto s : p_scores1) // error with size(): pointer, not array
    // {
    //     std::cout << "score: " << s << std::endl;
    // }

    delete[] p_scores1;
    p_scores1 = nullptr;

    //====================================================================

    std::cout << "============== run check ==============" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
