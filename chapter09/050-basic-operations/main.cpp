#include <iostream>

int main(){
    int number1 {2};
    int number2 {7};

    // Addition
    int result = number1 + number2;
    std::cout << number1 << " + " << number2 << " = " << result << std::endl;

    // Substraction
    result = number1 - number2;
    std::cout << number1 << " - " << number2 << " = " << result << std::endl;

    // Multiplication
    result = number1 * number2;
    std::cout << number1 << " * " << number2 << " = " << result << std::endl;

    // Division
    result = number1 / number2;
    std::cout << number1 << " / " << number2 << " = " << result << std::endl;

    // Modulus
    result = number2 % number1;
    std::cout << number2 << " % " << number1 << " = " << result << std::endl;

    return 0;
}
