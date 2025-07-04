#include <iostream>

int main()
{
    //===============================================================================
    // Braced initializers
    //===============================================================================

    // int elephant_count; // Variable may contain random filler (depends on compiler)
    // int lion_count{};   // Inits to zero
    // int dog_count{10};  // Inits to 10
    // int cat_count{15};  // Inits to 15

    // int domesticated_animals{dog_count + cat_count}; // Use expression as initializer

    // // int new_number{doesnt_exist};  // Won't compile
    // // int narrowing_conversion{2.9}; // Won't compile

    // std::cout << "Elephant count: " << elephant_count << std::endl;
    // std::cout << "Lion count: " << lion_count << std::endl;
    // std::cout << "Dog count: " << dog_count << std::endl;
    // std::cout << "Cat count: " << cat_count << std::endl;
    // std::cout << "Domesticated animal count: " << domesticated_animals << std::endl;

    //===============================================================================
    // Function Initialization
    //===============================================================================

    // int apple_count(5);
    // int orange_count(10);
    // int fruit_count(apple_count + orange_count);

    // // int bad_initialization(doesnt_exist3 + doesnt_exist4);
    // int narrowing_conversion_functional(2.9); // Stores as 2. Data loss. Less sage than braced because this still compiles.

    // std::cout << "Apple count: " << apple_count << std::endl;
    // std::cout << "Orange count: " << orange_count << std::endl;
    // std::cout << "Fruit count: " << fruit_count << std::endl;
    // std::cout << "Narrowing conversion: " << narrowing_conversion_functional << std::endl;

    //===============================================================================
    // Assignment Initialization
    //===============================================================================

    int bike_count = 2;
    int truck_count = 7;
    // int truck_count = 4294967295; // max for unsigned int (split =/- for signed)
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9; // Chops the decimal again

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conversion_assignment << std::endl;

    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}
