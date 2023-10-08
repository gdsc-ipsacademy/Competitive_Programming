//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    
        // code here
        
        int ans=0;
        int digit;
        
        while(n>0){
            digit= n%10;
            
            if(digit == 0){
                digit=5;
                
            }
          ans= ans*10+ digit;
         
         n=n/10;
        }
       n= ans;
      
      ans=0;
      
      while (n){
          digit = n%10;
          ans= ans*10 + digit;
          n=n/10;
      }
      
      return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends