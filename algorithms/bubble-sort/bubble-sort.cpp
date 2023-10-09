#include <bits/stdc++.h>
using namespace std;
template <typename T>
void bubbleSort(vector<T>& arr) {
    int n = arr.size();
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no two elements were swapped in inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    // Example usage with integers
    vector<int> intArray = {64, 25, 12, 22, 11};
    cout << "Original array: ";
    for (int num : intArray) {
        cout << num << " ";
    }
    
    bubbleSort(intArray);
    
    cout << "\nSorted array: ";
    for (int num : intArray) {
        cout << num << " ";
    }
    
    return 0;
}
