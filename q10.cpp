// 10. Write a program to check whether an element exists in a vector or not

#include<bits/stdc++.h>
using namespace std;

bool elementExists(const vector<int>& vec, int element) {
    return (find(vec.begin(), vec.end(), element) != vec.end());
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int elementToFind = 3;

    bool exists = elementExists(vec, elementToFind);

    if (exists) {
        cout << "Element " << elementToFind << " exists in the vector." << endl;
    } else {
        cout << "Element " << elementToFind << " does not exist in the vector." << endl;
    }

    return 0;
}
