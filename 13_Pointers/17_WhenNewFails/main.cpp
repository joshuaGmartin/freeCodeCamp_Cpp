#include <iostream>

int main()
{
    // // force failure #1
    // int *data = new int[100000000000]; // fails; too much for heap (bad_alloc)

    // // force failure #2
    // for (size_t i{}; i < 100; i++)
    // {
    //     int *data = new int[1000000000];
    // }

    //==================================================================================

    std::cout << "========== exception solution ==========" << std::endl;

    int *data{};

    try
    {
        int *data = new int[100000000000]; // new can fail
    }
    catch (std::exception &ex)
    {
        std::cout << "Error: " << ex.what() << std::endl; // caught (handled)
    }

    delete data;

    //==================================================================================

    std::cout << "========== nothrow solution ==========" << std::endl;

    int *data1 = new (std::nothrow) int[100000000000]; // pass the "new" operator a parameter

    if (data1 != nullptr)
    {
        std::cout << "data1 allocated" << std::endl;
    }
    else
    {
        std::cout << "data1 allocation failed" << std::endl;
    }

    delete data1;

    //==================================================================================

    std::cout << "runs" << std::endl;

    return 0;
}
