// 8. Write a program to find common elements between two vectors.

#include<bits/stdc++.h>
using namespace std;

vector<int> findCommonElements(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> commonElements;

    for (int num : vec1) {
        if (std::find(vec2.begin(), vec2.end(), num) != vec2.end()) {
            commonElements.push_back(num);
        }
    }

    return commonElements;
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {4, 5, 6, 7, 8};

    vector<int> commonElements = findCommonElements(vec1, vec2);

    cout << "Common elements: ";
    for (int num : commonElements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
