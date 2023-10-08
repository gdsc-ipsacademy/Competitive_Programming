//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool isVowel(char c){
        if(c=='A' || c=='a' || c=='e' || c=='E' ||c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u'){
         return 1;
     }
     return 0;
    }
    
        string modify (string s)
        {
            //code here.
            
            int st=0;
            int ed= s.length()-1;
            
            while(st<=ed){
                if(isVowel(s[st]) &&  isVowel(s[ed])){
                    swap(s[st], s[ed]);
                    st++;
                    ed--;
                }
                else{
                    if(isVowel(s[st])){
                        ed--;
                        
                    }
                    else if( isVowel(s[ed])){
                        st++;
                    }
                     else{
                         st++;
                         ed--;
                     }
                }
                
              
            }
            
             return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends