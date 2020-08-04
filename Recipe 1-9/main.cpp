//
// Created by shalaga44 on 8/4/20.
//
#include <iostream>
#include "boost/format.hpp"

using namespace std;

int main() {
    std::cout << "Enter your first name: " << std::endl;
    std::string firstName;
    std::cin >> firstName;
    std::cout << "Enter your surname: " << std::endl;
    std::string surname;
    std::cin >> surname;
    auto formattedName = str(boost::format("%1% %2%"s) % firstName % surname
    );
    std::cout << "You said your name is: " << formattedName << std::endl;
    return 0;
}
