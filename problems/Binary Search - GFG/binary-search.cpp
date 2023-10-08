//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int key) {
        // code here
        int low =0,mid,high=n-1;
        
        mid=low+(high-low)/2;
        
        while(low<=high)
        {
            if(arr[mid]==key)
            {
                return mid;
            }
            if (arr[mid]<key)
            {
                low =mid+1;
            }
             else{
                 high=mid-1;
             }
              mid=(low+high)/2;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends