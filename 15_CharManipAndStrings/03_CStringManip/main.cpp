#include <iostream>
#include <cstring>

int main()
{
    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strlen ==============" << std::endl;
    // find string length of really arrays and those decayed into pointers

    const char message1[]{"The sky is blue."};
    // Array decays into pointer when we use const char*
    const char *p_message2{"The sky is blue."};

    std::cout << "message1: " << message1 << std::endl;
    std::cout << "p_message2: " << p_message2 << std::endl;
    std::cout << "*p_message2: " << *p_message2 << std::endl;

    // strlen ignores null char "/0"
    std::cout << "strlen(message1): " << std::strlen(message1) << std::endl; // in function call, array decays into a pointer, which strlen expects and then walks until finds "/0"

    // sizeof includes null char "/0"
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

    // strlen works with decayed arrays
    std::cout << "strlen(p_message2): " << std::strlen(p_message2) << std::endl;

    // size of pointer only
    std::cout << "sizeof(p_message2): " << sizeof(p_message2) << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strcmp ==============" << std::endl;
    // return neg val if lhs appears in lexicographical order (0 if same, + if reverse order)

    const char *p_string_data1{"Alabama"};
    const char *p_string_data2{"Blabama"};

    char string_data3[]{"Alabama"};
    char string_data4[]{"Blabama"};
    // string_data4 = "Zlabama"; // error: can only change elements of array (if not const)
    // p_string_data1[1] = 'z'; // error: cant change original string literal

    // compare
    std::cout << "std::strcmp(" << p_string_data1 << ", " << p_string_data2 << "): " << std::strcmp(p_string_data1, p_string_data2) << std::endl;
    std::cout << "std::strcmp(" << string_data3 << ", " << string_data4 << "): " << std::strcmp(string_data3, string_data4) << std::endl;

    p_string_data1 = "Alabama";
    p_string_data2 = "Alabamb";
    // string_data3 = "Xlabama"; // error: no reassign arrays
    // string_data4 = "Ylabama"; // error: no reassign arrays

    std::cout << "std::strcmp(" << p_string_data1 << ", " << p_string_data2 << "): " << std::strcmp(p_string_data1, p_string_data2) << std::endl;

    p_string_data1 = "Houston";
    p_string_data2 = "Arlen";

    std::cout << "std::strcmp(" << p_string_data1 << ", " << p_string_data2 << "): " << std::strcmp(p_string_data1, p_string_data2) << std::endl;

    p_string_data1 = "Bob";
    p_string_data2 = "Bob";

    std::cout << "std::strcmp(" << p_string_data1 << ", " << p_string_data2 << "): " << std::strcmp(p_string_data1, p_string_data2) << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strncmp (num of chars) ==============" << std::endl;

    size_t n{3};

    p_string_data1 = "aaabbb";
    p_string_data2 = "aaaccc";

    std::cout << "std::strncmp(" << p_string_data1 << ", " << p_string_data2 << ", " << n << "): " << std::strncmp(p_string_data1, p_string_data2, n) << std::endl;

    p_string_data1 = "aabzzz";
    p_string_data2 = "aacddd";

    std::cout << "std::strncmp(" << p_string_data1 << ", " << p_string_data2 << ", " << n << "): " << std::strncmp(p_string_data1, p_string_data2, n) << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strchr ==============" << std::endl;
    // char search, one by one

    // test
    //  strchr returns pointer to first occurrence of target; when print pointer, you get the string until \0
    //  // const char *test_str{"abc"};
    //  char test_str[]{"abc"};
    //  char test_targ = 'b';
    //  std::cout << "std::strchr(test_str, test_targ): " << std::strchr(test_str, test_targ) << std::endl;

    // const char *const str{"Try not. Do, or do not. There is no try."}; // can use const pointer to prevent user reassign
    const char *str{"Try not. Do, or do not. There is no try."}; // can use const pointer to prevent user reassign
    char target = 'T';
    const char *result = str;
    int iterations{};

    // check
    std::cout << "str: " << str << std::endl;
    std::cout << "*str: " << *str << std::endl;
    std::cout << "target: " << target << std::endl;
    std::cout << "result: " << result << std::endl;
    std::cout << "*result: " << *result << std::endl;
    std::cout << "iterations: " << iterations << std::endl;

    while ((result = std::strchr(result, target)) != nullptr) // assigning result with the returned pointer from strchr here
    {
        std::cout << "Found '" << target << "' starting at '" << result << std::endl; // prints the result pointer here
        result++;                                                                     // move the pointer up one and run again (while result != nullptr)
        iterations++;                                                                 // count the targets found
    }
    std::cout << "iterations: " << iterations << std::endl;

    //====================================================================
    // std::cout << std::endl;
    // std::cout << "============== strchr (wrong way) ==============" << std::endl;

    // // reset
    // result = nullptr;
    // iterations = 0;

    // while ((result = std::strchr(str, target)) != nullptr) // crash: undefined behavior of calling strchr on nullptr
    // {
    //     std::cout << "Found '" << target << "' starting at '" << result << std::endl; // 25 iterations?
    //     str++;                                                                        // error: increments the pointer by one form left to right: no jump to next 'T'
    //     iterations++;
    // }
    // std::cout << "iterations: " << iterations << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== strrchr (last occurrence) ==============" << std::endl;

    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/'); // points to last occurrence of '/'

    if (output)
    {
        std::cout << output + 1 << std::endl; // use pointer arithmetic to start next char (just the file name)
    }

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
