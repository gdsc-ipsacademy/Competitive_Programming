//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  

  int mod=1000000007;
  vector<vector<int>>dp;
    int solve(int i, int j, int n, int m, vector<vector<int>>&grid)
    {
        if(i==n-1 and j==m-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        
        int ways=0;
        if(j+1<m and grid[i][j+1]==1)
        {
            ways+=solve(i,j+1,n,m,grid);
        }
        
        if(i+1<n and grid[i+1][j]==1)
        {
            ways+=solve(i+1,j,n,m,grid);
        }
        
        return dp[i][j]=ways%mod;
    }

  
  
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
    
        if(grid[0][0]==0)return 0;
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        
        int ans=solve(0,0,n,m,grid)%mod;
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends