//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
         //code here.
        string ans="";
        for(int i=0;i< S.length();i++){
            
            char a;
            
            if(S[i]>= 'A' && S[i]<= 'Z' ){
                a = S[i]+32;
               
            }
            else{
              a=S[i];
            }
             ans += a;
            
                
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends