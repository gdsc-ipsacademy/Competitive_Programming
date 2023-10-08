//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    string ans= to_string(n);
	     
	     ans += to_string(n*2);
	     ans+= to_string(n*3);
	     
	     int arr[9] = {0};
	     for(int  i =0;i< ans.length();i++){
	         arr[ans[i]-'0'-1]++;
	     }
	     
	     for(int i =0;i< 9;i++){
	         if(arr[i] !=1){
	             return false;
	         }
	     }
	     return true;
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
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends