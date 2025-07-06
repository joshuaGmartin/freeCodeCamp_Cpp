#include <iostream>
#include <cmath>

int main()
{

    std::cout << "========== declare ==========" << std::endl;
    double weight{7.7};
    double savings{-5000};
    double exponential = std::exp(10); // f(x) = e^x. e = 2.71828

    std::cout << "weight: " << weight << std::endl;
    std::cout << "savings: " << savings << std::endl;

    std::cout << "========== floor/ceil ==========" << std::endl;
    std::cout << "floor: " << std::floor(weight) << std::endl;
    std::cout << "ceil: " << std::ceil(weight) << std::endl;

    std::cout << "========== abs ==========" << std::endl;
    std::cout << "weight abs: " << std::abs(weight) << std::endl;
    std::cout << "savings abs: " << std::abs(savings) << std::endl;

    std::cout << "========== exp ==========" << std::endl;
    std::cout << "exp of 10: " << exponential << std::endl;

    std::cout << "========== pow ==========" << std::endl;
    std::cout << "3^4: " << std::pow(3, 4) << std::endl;
    std::cout << "9^3: " << std::pow(9, 3) << std::endl;

    std::cout << "========== log ==========" << std::endl;
    std::cout << "ln(54.59): " << std::log(54.59) << std::endl; // default base e
    std::cout << "log(1000): " << std::log10(1000) << std::endl;

    std::cout << "========== root ==========" << std::endl;
    std::cout << "square of of 81: " << std::sqrt(81) << std::endl;

    std::cout << "========== round ==========" << std::endl;
    std::cout << "3.654 rounded: " << std::round(3.654) << std::endl;
    std::cout << "2.5 rounded: " << std::round(2.5) << std::endl;
    std::cout << "2.4 rounded: " << std::round(2.4) << std::endl;

    return 0;
}
