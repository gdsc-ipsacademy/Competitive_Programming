//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
          int n=arr.size();
        
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        
        for(int i=0;i<n-3;i++)
        {
            if(i>0 and arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 and arr[j]==arr[j-1]) continue;
                int low=j+1,high=n-1;
                
                while(low<high)
                {
                    int sum=arr[i]+arr[j]+arr[low]+arr[high];
                    
                    if(sum==k)
                    {
                        ans.push_back({arr[i],arr[j],arr[low],arr[high]});
                        int a=arr[low],b=arr[high];
                        while(low<high and a==arr[low]) low++;
                        while(low<high and b==arr[high]) high--;
                    }
                    else if(sum<k) low++;
                    else high--;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends