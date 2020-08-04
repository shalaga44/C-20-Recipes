//
// Created by shalaga44 on 8/4/20.
//
#include <iostream>

using namespace std;

class MyClass {
};

int main() {
    auto variable0 = 1;
    cout << "Type of variable: " << typeid(variable0).name() << endl;
    auto variable1 = MyClass();
    cout << "Type of variable: " << typeid(variable1).name() << endl;
    auto variable2 = {1};
    cout << "Type of variable: " << typeid(variable2).name() << endl;
    auto variable3 = {MyClass{}};
    cout << "Type of variable: " << typeid(variable3).name() << endl;
    return 0;
}