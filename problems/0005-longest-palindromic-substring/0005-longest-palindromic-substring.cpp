class Solution {
public:
    
    bool isPalindrone(string &s, int start, int end)
    {
        while(start<end)
        {
          if(s[start] != s[end])
          {
              return false;
          }
            start++, end--;
        }
        return true;
    }
    
    
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                // substring nikl li ab check krne k liye funstion ko clal krenge
                if(isPalindrone(s,i,j)){
                    string t= s.substr(i,j-i+1);
                    ans=t.size()>ans.size()? t:ans;
                }
            }
        }
    return ans;
    }
};
