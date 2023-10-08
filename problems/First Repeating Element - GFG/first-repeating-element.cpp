//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++



class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // // code here
        // for(int i=0;i<n;i++)
        // {
        //     bool isRepeated=false;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(arr[i]==arr[j])
        //         {
        //             bool isRepeated=true;
        //             return i+1;
        //         }
        //     }
        // }
        // return -1;
        
        unordered_map<int, int>hash;
        
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(hash[arr[i]]>1)
            {
                return i+1;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends