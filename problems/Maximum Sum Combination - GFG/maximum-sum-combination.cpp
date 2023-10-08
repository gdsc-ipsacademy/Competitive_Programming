//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
          sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<N;i++)
        {
            int sum = A[i]+B[N-1];
            pq.push({sum,N-1});
        }
        
        while(!pq.empty() and K--)
        {
            int sum = pq.top().first;
            int ind = pq.top().second;
            pq.pop();
            ans.push_back(sum);
            if(ind-1>=0)
            pq.push({sum-B[ind]+B[ind-1], ind-1});
        }
        
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends