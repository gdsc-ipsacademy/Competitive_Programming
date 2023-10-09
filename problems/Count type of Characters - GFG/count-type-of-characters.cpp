//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            vector<int>ans;
            int uppercase =0;
            int lowercase  =0;
            int numeric    =0;
            int special   =0;
               
            for(int i =0;i<s.length(); i++){
                
                if( s[i]>=65 && s[i]<=90){
                    uppercase++;
                }
               else if(s[i]>=97 && s[i]<=122){
                    lowercase++;
                }
               else  if(s[i]>=48 && s[i]<=57){
                    numeric++;
                }
               else {
                    special ++;
                }
                
                
            
            }
            ans.push_back(uppercase);
             ans.push_back(lowercase);
              ans.push_back(numeric);
               ans.push_back(special);
               return ans;
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
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends