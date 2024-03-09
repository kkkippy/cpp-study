#include <iostream>
#include <vector>

int main() {
    // Programação low-level
    int number = 42;
    int* ptr_number = &number;

    // Programação high-level
    std::vector<int> myVector = { 1, 2, 3 };
    for (const auto &i: myVector) {
        std::cout << i << std::endl;
    }
}