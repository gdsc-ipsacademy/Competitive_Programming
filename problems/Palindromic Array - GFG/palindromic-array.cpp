//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

         bool isPalindrome( int num){
             
             int temp=0;
             int num_copy = num;
             
             while(num>0){
                 temp = temp *10 + num%10;
                 num = num/10;
             }
             
             if(temp == num_copy){
                 return 1;
         }
         else
         {
             return 0;
         }
         }

    int PalinArray(int a[], int n)
    {
    	// code here
    	
    	for(int i =0; i< n; i++){
    	    if(!isPalindrome(a[i])){
    	        return 0;
    	    }
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends