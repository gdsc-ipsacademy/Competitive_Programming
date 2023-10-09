//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  
    bool isPalindrone(int sum){
        
       
        
    }
  
    int isDigitSumPalindrome(int N) {
        // code here
        
        
        int ans=0;
        int sum=0;
        
        int digit;
        
        while(N>0){
            digit= N%10;
         sum =sum + digit;
         
         N=N/10;
        }
        
        
       string numStr = to_string(sum);

        // Compare characters from the beginning and end of the string
        int left = 0;
        int right = numStr.length() - 1;

        while (left < right) {
            if (numStr[left] != numStr[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends