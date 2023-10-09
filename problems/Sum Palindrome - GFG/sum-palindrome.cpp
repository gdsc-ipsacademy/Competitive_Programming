//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  bool isPalindrone(long long n){
      if(reverse(n)==n){
          return 1;
      }
      return 0;
  }
  
  long long reverse(long long n){
      long long temp=0;
      while(n){
          temp = temp*10+ n%10;
          n=n/10;
      }
      return temp;
  }
  
    long long isSumPalindrome(long long n){
        // code hered 
        int count =0;
        while(count<5){
            if(isPalindrone(n)){
                return n;
            }
            n=n+reverse(n);
            count++;
            
        }
        
        if( isPalindrone(n)){
            return n;
        }
        
        else{
                return -1;
            }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends