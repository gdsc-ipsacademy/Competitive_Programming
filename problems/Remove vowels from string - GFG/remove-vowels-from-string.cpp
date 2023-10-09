//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		string s="";
	string removeVowels(string S) 
	{
	    for(int  i =0;i< S.length(); i++){
	        if(S[i] =='a'|| S[i] =='e'|| S[i]=='i'|| S[i]=='o'|| S[i]=='u'){
	           
	        }
	        else{
	             char a= S[i];
	            s.push_back(a);
	        }
	    }
	    
	    return s;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends