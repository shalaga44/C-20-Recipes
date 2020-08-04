//
// Created by shalaga44 on 8/4/20.
//
#include <array>
#include <cstdint>
#include <iostream>

class MyClass {
private:
    uint32_t m_Member;
public:
    constexpr MyClass(uint32_t parameter)
            : m_Member{parameter} {
    }

    constexpr uint32_t GetValue() const {
        return m_Member;
    }
};

constexpr uint32_t ArraySizeFunction(uint32_t parameter) {
    uint32_t value{parameter};
    if (value > 4) {
        value = 4;
    }
    return value;
}

int reg_const() { return 999; }

constexpr int new_const() { return 999; }

int main() {
    constexpr uint32_t ARRAY_SIZE1{MyClass(10).GetValue()};
    std::array<uint32_t, ARRAY_SIZE1> myArray1{1, 2, 3, 4};
    constexpr uint32_t ARRAY_SIZE2{ArraySizeFunction(10)};
    std::array<uint32_t, ARRAY_SIZE2> myArray2{1, 2, 3, 4};

    for (auto &&number : myArray1) {
        std::cout << number << std::endl;
    }
    for (auto &&number : myArray2) {
        std::cout << number << std::endl;
    }

    const int first = reg_const();
    int second = new_const();
    second = 1; // technically a constant should not be changeable
    std::cout << first << " != to " << second << std::endl;
    return 0;
}