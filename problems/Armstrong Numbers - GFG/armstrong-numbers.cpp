//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        
         int original =n;
    int sum=0;
 
    while(n>0){
         int lastDigit= n%10;
    
       sum = sum +  (lastDigit*lastDigit*lastDigit);
      n=n/10;
    }
    
    if(sum == original){
        return "Yes";
    }
    else{
        return "No";
    }
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends