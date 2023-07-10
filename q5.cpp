// 5. Find largest and smallest elements in a vector

#include<bits/stdc++.h>
using namespace std;

void findLargestAndSmallest(const vector<int>& vec, int& largest, int& smallest) {
    largest = numeric_limits<int>::min();
    smallest = numeric_limits<int>::max();

    for (int num : vec) {
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }
}

int main() {
    vector<int> vec = {5, 2, 9, 1, 7};

    int largest, smallest;

    findLargestAndSmallest(vec, largest, smallest);

    cout << "Largest element: " << largest << std::endl;
    cout << "Smallest element: " << smallest << std::endl;

    return 0;
}
