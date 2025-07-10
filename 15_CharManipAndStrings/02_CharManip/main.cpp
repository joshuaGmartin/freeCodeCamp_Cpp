#include <iostream>

int main()
{
    //====================================================================
    std::cout << std::endl;
    std::cout << "============== is alphanumeric ==============" << std::endl;

    std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
    std::cout << "7 is alphanumeric: " << std::isalnum('7') << std::endl;
    std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;

    // tester
    char input_char{'*'};
    std::cout << "input_char: " << input_char << std::endl;
    if (std::isalnum(input_char))
    {
        std::cout << "is alphanumeric" << std::endl;
    }
    else
    {
        std::cout << "is NOT alphanumeric" << std::endl;
    }

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== is alphabetic ==============" << std::endl;

    std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl; // not always a 1, just non-zero
    std::cout << "7 is alphabetic: " << std::isalpha('7') << std::endl;
    std::cout << "^ is alphabetic: " << std::isalpha('^') << std::endl;

    // tester
    input_char = 'e';
    std::cout << "input_char: " << input_char << std::endl;
    if (std::isalpha(input_char))
    {
        std::cout << "is alphabetic" << std::endl;
    }
    else
    {
        std::cout << "is NOT alphabetic" << std::endl;
    }

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== is blank ==============" << std::endl;

    char message[]{"Hello there. How are you doing? The sun is shining."};

    // find and print blank index
    size_t blank_count{}; // technically counting a size, so use size_t
    // for (auto c : message) // works but need index
    for (size_t i{0}; i < std::size(message); i++)
    {
        if (std::isblank(message[i]))
        {
            blank_count++;
            std::cout << "blank at index " << i << std::endl;
        }
    }
    std::cout << "blank_count: " << blank_count << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== is upper/lower ==============" << std::endl;

    size_t lower_count{};
    size_t upper_count{};

    for (auto c : message)
    {
        if (std::islower(c))
        {
            std::cout << c << " is lower" << std::endl;
            lower_count++;
        }
        if (std::isupper(c))
        {
            std::cout << c << " is upper" << std::endl;
            upper_count++;
        }
    }
    std::cout << "lower_count: " << lower_count << std::endl;
    std::cout << "upper_count: " << upper_count << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== is digit ==============" << std::endl;

    std::cout << "C is alphanumeric: " << std::isdigit('C') << std::endl;
    std::cout << "7 is alphanumeric: " << std::isdigit('7') << std::endl;
    std::cout << "^ is alphanumeric: " << std::isdigit('^') << std::endl;

    // tester
    input_char = '8';
    std::cout << "input_char: " << input_char << std::endl;
    if (std::isdigit(input_char))
    {
        std::cout << "is digit" << std::endl;
    }
    else
    {
        std::cout << "is NOT digit" << std::endl;
    }

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== change case ==============" << std::endl;

    char original_str[]{"Home. Home is where the Heart is."};
    char dest_str[std::size(original_str)]; // need init size to allocate mem on stack

    std::cout << "original_str: " << original_str << std::endl;

    // to upper
    for (size_t i{}; i < std::size(original_str); i++)
    {
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout << "original_str to upper: " << dest_str << std::endl;

    // to lower
    for (size_t i{}; i < std::size(original_str); i++)
    {
        dest_str[i] = std::tolower(original_str[i]);
    }

    std::cout << "original_str to lower: " << dest_str << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
