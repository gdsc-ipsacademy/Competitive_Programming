//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    
		    
		     int n = v.size();
        sort(v.begin(), v.end());
        int half = n / 2;
        int median = 0;

        if (n % 2 == 0)
        {
            // If the number of elements is even, return the average of the two middle elements
            median = (v[half - 1] + v[half]) / 2;
        }
        else
        {
            // If the number of elements is odd, return the middle element
            median = v[half];
        }

        return median;
    
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends