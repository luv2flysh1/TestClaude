#include "Greeter.h"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string name;

    do {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        if (name.empty()) {
            std::cout << "Name cannot be empty. Please try again." << std::endl;
        }
    } while (name.empty());

    Greeter greeter(name);
    std::cout << greeter.greet() << std::endl;
    return 0;
}
