//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int N = Integer.parseInt(in.readLine());
            String input_line[] = in.readLine().trim().split("\\s+");
            int arr[] = new int[N];
            for(int i = 0;i < N;i++)
                arr[i] = Integer.parseInt(input_line[i]);
            
            Solution ob = new Solution();
            int x = ob.equalPartition(N, arr);
            if(x == 1)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution{
    static int equalPartition(int N, int arr[])
    {
        // code here int sum = 0;
        int sum =0;
        for(int x : arr)
        {
            sum+=x;
        }
        
        
        if(sum%2==1) return 0;
        sum = sum/2;
        int x[][] = new int[N+1][sum+1];
        
        for(int i=0; i<=N; i++) 
        {
            x[i][0] = 1;
        }
        
        for(int i=1; i<=N; i++){
            for(int j=0; j<=sum; j++){
                if(arr[i-1]<=j) x[i][j] = x[i-1][j]+x[i-1][j-arr[i-1]];
                else x[i][j] = x[i-1][j];
            }
        }
        return x[N][sum]==0?0:1;
    }
}