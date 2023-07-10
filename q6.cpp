// 6. Write a program to reverse vector elements

#include<bits/stdc++.h>
using namespace std;

void reverseVector(vector<int>& vec) {
    reverse(vec.begin(), vec.end());
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    reverseVector(vec);

    cout << "Reversed vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
