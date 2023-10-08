//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String a[] = in.readLine().trim().split("\\s+");
            int N = Integer.parseInt(a[0]);
            int S = Integer.parseInt(a[1]);
            
            Solution ob = new Solution();
            System.out.println(ob.findLargest(N, S));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    static String findLargest(int N, int S){
         if(S>9*N || (N!=1 && S==0)) return "-1";
        int a = S/9;
        int b = S%9;
        
        StringBuilder sb = new StringBuilder();
        
        for(int i=0; i<a; i++){
            sb.append(9);
        }
        if(a<N){
            sb.append(b);
            for(int i=0; i<N-a-1; i++){
                sb.append(0);
            }
        }
        
        return sb.toString();
    }
}