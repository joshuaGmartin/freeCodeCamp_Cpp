#include <iostream>
#include <string>

int main()
{
    //====================================================================
    std::cout << std::endl;
    std::cout << "============== string ==============" << std::endl;
    // way easier

    std::string fullname;                               // empty string
    std::string planet{"Earth. Where the sky is blue"}; // init with string literal. Knows to store as char array
    std::string preferred_planet{planet};               // init with other existing string
    std::string message{"Hello there", 5};              // init with part of string literal (only has "Hello")
    std::string weird_message(4, 'e');                  // int with multiple copies of char ("eeee"). Note: need () not {}
    std::string greeting{"Hello World"};                //
    std::string saying_hello{greeting, 6, 5};           // init with part of existing string. Start at index 6, take 5 char ("World")

    // super convenient
    std::cout << "fullname: " << fullname << std::endl;
    std::cout << "planet: " << planet << std::endl;
    std::cout << "preferred_planet: " << preferred_planet << std::endl;
    std::cout << "message: " << message << std::endl;
    std::cout << "weird_message: " << weird_message << std::endl;
    std::cout << "greeting: " << greeting << std::endl;
    std::cout << "saying_hello: " << saying_hello << std::endl;

    // change std::string size at runtime
    // can reassign to something larger that init string (mem auto  returned to OS and new mem allocated: no waste)
    planet = "Earth. Where the sky is blue. Earth. Where the sky is blue. Earth. Where the sky is blue.";
    std::cout << "planet (updated): " << planet << std::endl;

    // versus raw array
    const char *planet1{"Earth. Where the sky is blue"}; // pointer
    // works, but just points to another char array. Wastes original mem (pointer)
    planet1 = "Earth. Where the sky is blue. Earth. Where the sky is blue. Earth. Where the sky is blue.";
    std::cout << "planet1: " << planet1 << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
