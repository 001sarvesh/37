// 3. Write a function to print the element of a vector and take input from the user.
#include <bits/stdc++.h>
using namespace std;

void printVector(const std::vector<int>& vec) {
    cout << "Elements of the vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec;
    int numElements;

    cout << "Enter the number of elements: ";
    cin >> numElements;

    cout << "Enter the elements: ";
    for (int i = 0; i < numElements; ++i) {
        int element;
        cin >> element;
        vec.push_back(element);
    }

    printVector(vec);

    return 0;
}
