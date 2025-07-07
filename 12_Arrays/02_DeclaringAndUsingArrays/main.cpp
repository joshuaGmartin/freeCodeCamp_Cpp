#include <iostream>

int main()
{
    // // Declare array of ints
    // int scores[10]; // junk data, no init

    // // Read data

    // std::cout << "scores[0]: " << scores[0] << std::endl;
    // std::cout << "scores[1]: " << scores[1] << std::endl;

    // for (size_t i{0}; i < 10; i++)
    // {
    //     std::cout << "scores[" << i << "]:" << scores[i] << std::endl;
    // }

    // ==========================================================================================

    // scores[0] = 20;
    // scores[1] = 21;
    // scores[2] = 22;

    // for (size_t i{0}; i < 10; i++)
    // {
    //     std::cout << "scores[" << i << "]:" << scores[i] << std::endl;
    // }

    // ==========================================================================================

    // // write data in a loop
    // for (size_t i{0}; i < 10; i++)
    // {
    //     scores[i] = i * 10;
    // }

    // for (size_t i{0}; i < 10; i++)
    // {
    //     std::cout << "scores[" << i << "]:" << scores[i] << std::endl;
    // }

    // ==========================================================================================

    // // declare and init array in place
    // double salaries[5]{1.1, 2.2, 3.3, 4.4, 5.5};

    // for (size_t i{0}; i < 5; i++)
    // {
    //     std::cout << "salaries[" << i << "]:" << salaries[i] << std::endl;
    // }

    // // ==========================================================================================

    // // non-init elements are zero
    // double salaries[10]{1.1, 2.2, 3.3, 4.4, 5.5};

    // for (size_t i{0}; i < 10; i++)
    // {
    //     std::cout << "salaries[" << i << "]:" << salaries[i] << std::endl;
    // }

    // // ==========================================================================================

    // // auto set array size (must init)
    // int class_sizes[]{1, 2, 3, 4, 5};

    // // // size is auto set, need flexible COUNT
    // // for (size_t i{0}; i < 10; i++)
    // // {
    // //     std::cout << "class_sizes[" << i << "]:" << class_sizes[i] << std::endl;
    // // }

    // for (auto value : class_sizes)
    // {
    //     std::cout << "value: " << value << std::endl;
    // }

    // // ==========================================================================================

    // const int birds[]{1, 2, 3, 4, 5, 6};

    // birds[2] = 99; // Error: birds is an array of const int's

    // ==========================================================================================

    int scores[]{1, 2, 3, 4, 5, 6};
    int sum{0};

    for (int element : scores)
    {
        sum += element;
    }

    std::cout << "Score sum: " << sum << std::endl;

    return 0;
}
