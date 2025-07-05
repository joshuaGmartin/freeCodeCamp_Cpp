#include <iostream>

int main()
{
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l}; // l, not 1
    auto var5{'e'};

    // int modifier suffixes
    auto var6{123u};  // unsigned
    auto var7{132ul}; // unsigned long
    auto var8{123ll}; // long long

    // can see type by hovering over variable in vscode
    std::cout << "var1 size: " << sizeof(var1) << std::endl;
    std::cout << "var2 size: " << sizeof(var2) << std::endl;
    std::cout << "var3 size: " << sizeof(var3) << std::endl;
    std::cout << "var4 size: " << sizeof(var4) << std::endl;
    std::cout << "var5 size: " << sizeof(var5) << std::endl;
    std::cout << "var6 size: " << sizeof(var6) << std::endl;
    std::cout << "var7 size: " << sizeof(var7) << std::endl;
    std::cout << "var8 size: " << sizeof(var8) << std::endl;

    return 0;
}
