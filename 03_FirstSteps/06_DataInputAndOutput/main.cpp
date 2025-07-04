#include <iostream>
// allows store strings
#include <string>
// 

int main()
{
    // // Print data
    // // Data goes from program to terminal
    // std::cout << "Hello!" << std::endl;

    // int age{35};
    // std::cout << "Age: " << age << std::endl;

    // std::cerr << "Error message: No! Bad!" << std::endl;

    // std::clog << "Log message: A thing has occurred" << std::endl;

    //==============================================================
    
    // // From terminal to program
    // int age1;
    // std::string name;
    
    // std::cout << "Please input name and age:" << std::endl;
    
    // // From stream to program, reverse arrows
    // // std::cin >> name;
    // // std::cin >> age1;
    // std::cin >> name >> age1;
    
    // std::cout << "Hello, " << name << "! You are " << age1 << " years old." << std::endl;
    
    //==============================================================
    
    // Data with spaces
    std::string full_name;
    int age3;
    
    std::cout << "Please input fullname and age:" << std::endl;
    
    std::getline(std::cin, full_name);
    std::cin >> age3;

    std::cout << "Hello, " << full_name << "! You are " << age3 << " years old." << std::endl;
    
    
    return 0;
}
