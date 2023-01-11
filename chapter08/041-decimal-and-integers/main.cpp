#include <iostream>

int main(){
    int elephant_count; // May contain random garbage value.
    int lion_count {};  // Intializes to zero.
    int dog_count {10}; // Initializes to 10.
    int cat_count {15}; // Initializes to 15.

    // Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    // 2.9 is of type double, with a wider range than int. Error or warning.
    //int narrowing_conversion_braces {2.9}; /* Compilation error */
    int narrowing_conversion_functional (2.9);
    int narrowing_conversion_assigment = 2.9;


    std::cout << "elephant_count = " << elephant_count << std::endl;
    std::cout << "lion_count = " << lion_count << std::endl;
    std::cout << "dog_count = " << dog_count << std::endl;
    std::cout << "cat_count = " << cat_count << std::endl;
    std::cout << "domesticated_animals = " << domesticated_animals << std::endl;
    std::cout << "narrowing_conversion_functional = " << narrowing_conversion_functional << std::endl;
    std::cout << "narrowing_conversion_assigment = " << narrowing_conversion_assigment << std::endl;

    // Size of a type or variable in memory
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "sizeof(lion_count) = " << sizeof(lion_count) << std::endl;
    
    return 0;
}