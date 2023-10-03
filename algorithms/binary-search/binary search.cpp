#include <bits/stdc++.h>
using namespace std;

template<typename T>
int binary_search(vector<T> &v, T x) {
    int left = 0;
    int right = v.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == x) {
            return mid; // Target found
        } else if (v[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int x = 3; 

    int index_x = binary_search(v, x);

    if (index_x != -1) {
        cout << "Target " << x << " found at index " << index_x << endl;
    } else {
        cout << "Target " << x << " not found in the array." << endl;
    }

    return 0;
}
