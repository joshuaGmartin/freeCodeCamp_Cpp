#include <iostream>
#include <string>

// use ref on inputs to avoid copies?
void max_str(const std::string &input1, const std::string input2, std::string &output) // const ref because we typically don't want to change inputs (ref on input1 isn't needed)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_int(int input1, int input2, int &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_double(double input1, double input2, double *output)
{
    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}

int main()
{
    std::cout << std::endl;
    std::cout << "====================== max str ========================" << std::endl;

    // const std::string string1 = "apple";
    const std::string string1 = "zebra";
    const std::string string2 = "banana";
    std::string output_string;

    std::cout << "string1 before: " << string1 << std::endl;
    std::cout << "string2 before: " << string2 << std::endl;
    std::cout << "output_string before: " << output_string << std::endl;

    max_str(string1, string2, output_string); // params are refs
    std::cout << "----------------------------" << std::endl;

    std::cout << "string1 after: " << string1 << std::endl;
    std::cout << "string2 after: " << string2 << std::endl;
    std::cout << "output_string after: " << output_string << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "====================== max int ========================" << std::endl;

    // const int num1 = 1;
    const int num1 = 111;
    const int num2 = 2;
    int output_num; // junk

    std::cout << "num1 before: " << num1 << std::endl;
    std::cout << "num2 before: " << num2 << std::endl;
    std::cout << "output_num before: " << output_num << std::endl;

    max_int(num1, num2, output_num);
    std::cout << "----------------------------" << std::endl;

    std::cout << "num1 after: " << num1 << std::endl;
    std::cout << "num2 after: " << num2 << std::endl;
    std::cout << "output_num after: " << output_num << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "====================== max double ========================" << std::endl;

    // const double dbl1 = 1.11;
    const double dbl1 = 111.11;
    const double dbl2 = 2.22;
    double output_dbl; // junk

    std::cout << "dbl1 before: " << dbl1 << std::endl;
    std::cout << "dbl2 before: " << dbl2 << std::endl;
    std::cout << "output_dbl before: " << output_dbl << std::endl;

    max_double(dbl1, dbl2, &output_dbl); // param is pointer, pass address
    std::cout << "----------------------------" << std::endl;

    std::cout << "dbl1 after: " << dbl1 << std::endl;
    std::cout << "dbl2 after: " << dbl2 << std::endl;
    std::cout << "output_dbl after: " << output_dbl << std::endl;

    //====================================================================

    std::cout << std::endl;
    std::cout << "-------------- runs -------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
