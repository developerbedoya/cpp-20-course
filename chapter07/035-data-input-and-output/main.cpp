#include <iostream>
#include <string>

int main (int argc, char **argv) {
    int age;
    std::string name;

    std::cout << "Please type in your full name: ";
    std::getline(std::cin, name);

    std::cout << "Please type in your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old!" << std::endl;

    return 0;
}