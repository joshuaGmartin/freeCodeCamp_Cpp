#include <iostream>
// #include <string>

int sum(int a, int b)
{
    int result = a + b;
    std::cout << "result inside: " << result << std::endl;
    std::cout << "&result inside: " << &result << std::endl;
    return result;
}

std::string add_strings(std::string str1, std::string str2)
{
    std::string result = str1 + str2;
    std::cout << "&result inside: " << &result << std::endl;
    return result;
}

int main()
{
    //====================================================================

    std::cout << std::endl;
    std::cout << "============== sum ==============" << std::endl;

    int x{1};
    int y{2};
    int result = sum(x, y); // diff address. Function make copies by default ("Return by value")

    std::cout << "&result outside: " << &result << std::endl;
    std::cout << "result outside: " << result << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "============== string ==============" << std::endl;

    std::string in_str1{"apple"};
    std::string in_str2{"banana"};
    std::string str_result = add_strings(in_str1, in_str2); // same address. Auto returns by reference with "Return Value Optimization (RVO)"

    std::cout << "&str_result outside: " << &str_result << std::endl;
    std::cout << "str_result outside: " << str_result << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
