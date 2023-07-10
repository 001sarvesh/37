// 7. Write a program to find sum of vector elements

#include<bits/stdc++.h>
using namespace std;


int findSum(const vector<int>& vec) {
    int sum = accumulate(vec.begin(), vec.end(), 0);
    return sum;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    int sum = findSum(vec);

    cout << "Sum of vector elements: " << sum << endl;

    return 0;
}
