#include<bits/stdc++.h>
using namespace std;

template<typename T> 
int binary_search(vector<T> &v, T x) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int mid = l + (r-l >> 1);
        if (v[mid] == x) return mid;
        else if (v[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int x = 3;
    cin>>x;
    int index_x = binary_search(v, x);
    cout << index_x << endl;
    return 0;
}