//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   // sort(arr.start(), arr.end());
	   //  int  largest = arr[n-1];
	   // for(int i =n-2;i>=0;i--){
	   //     if( arr[i] != largest){
	   //         largest= arr[i];
	   //         break;
	   //     }
	        
	   // }
	    
	   // return largest;

    // int largest= arr[0];
    //  for(int i =0;i<n;i++){
    //      if(arr[i]>largest){
    //          largest= arr[i];
    //      }
    //  }
     
     
    //  int secondL=-1;
    //  for(int i =0;i<n;i++){
    //      if(arr[i]>secondL && arr[i] !=largest){
    //          secondL= arr[i];
    //      }
    //  }
     
    //  return secondL;


       int largest = arr[0];
       int secondL= -1;

         for(int i =1;i< n ;i++){
            if(arr[i]>largest ){
              secondL = largest;
              largest = arr[i];
        
         }
             else if(arr[i]< largest &&  arr[i] > secondL){
              secondL =arr[i];
        } 
     }

     return secondL;

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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends