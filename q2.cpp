// 2. Declare a vector without initialization, insert some elements and print

#include <iostream>
#include <vector>

int main() {
    // Declare an empty vector of integers
    std::vector<int> vec;

    // Insert elements into the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Print the elements of the vector
    std::cout << "Elements of the vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
