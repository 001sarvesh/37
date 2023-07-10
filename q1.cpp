// 1. Declare a vector with Initialization and print the elements.

#include <iostream>
#include <vector>

int main() {
    // Declare and initialize a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Print the elements of the vector
    std::cout << "Elements of the vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

