#include <iostream>

int main()
{
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for (size_t i{0}; i < std::size(scores); i++)
    // {
    //     std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    // }

    // if no need indicies
    for (auto i : scores)
    {
        std::cout << "score: " << i << std::endl;
    }

    return 0;
}
