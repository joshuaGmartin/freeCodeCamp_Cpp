#include <iostream>

int main()
{
    //====================================================================
    std::cout << std::endl;
    std::cout << "============== non const ref ==============" << std::endl;

    int age{27};
    int &ref_age{age};

    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;

    std::cout << "-------------- mod via ref --------------" << std::endl;
    ref_age++;

    std::cout << "age: " << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;

    //====================================================================
    // std::cout << std::endl;
    // std::cout << "============== const ref ==============" << std::endl;

    // int age1{27};
    // const int &ref_age1{age1}; // const here only applies to ref, not original variable

    // std::cout << "age1: " << age1 << std::endl;
    // std::cout << "ref_age1: " << ref_age1 << std::endl;

    // std::cout << "-------------- mod via ref --------------" << std::endl;
    // ref_age1++; // error: ref is a const

    // std::cout << "age1: " << age1 << std::endl;
    // std::cout << "ref_age1: " << ref_age1 << std::endl;

    //====================================================================
    // std::cout << std::endl;
    // std::cout << "============== const original value ==============" << std::endl;

    // const int age2{27};
    // // int &ref_age2{age2}; // error: need const ref for const var
    // const int &ref_age2{age2};

    // std::cout << "age2: " << age2 << std::endl;
    // std::cout << "ref_age2: " << ref_age2 << std::endl;

    // std::cout << "-------------- mod via ref --------------" << std::endl;
    // // ref_age2++; // error: ref is a const

    // std::cout << "age2: " << age2 << std::endl;
    // std::cout << "ref_age2: " << ref_age2 << std::endl;

    //====================================================================
    std::cout << std::endl;
    std::cout << "============== sim ref with const pointer ==============" << std::endl;

    const int *p_age{&age};

    *p_age = 45; // error: pointer is const (read-only)

    //====================================================================
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    std::cout << "runs" << std::endl;

    return 0;
}
