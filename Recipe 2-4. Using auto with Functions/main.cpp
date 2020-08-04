//
// Created by shalaga44 on 8/4/20.
//
#include <iostream>

using namespace std;

auto AutoFunctionFromReturn1(int parameter) -> int {
    return parameter;
}

template<typename T>
auto AutoFunctionFromParameter2(T parameter) -> decltype(parameter) {
    return parameter;
}

int main() {
    auto value1 = AutoFunctionFromReturn1(1);
    cout << value1 << endl;
    auto value2 = AutoFunctionFromParameter2("Hey, I'm String");
    cout << value2 << endl;
    return 0;
}