class Solution {
public:
    bool checkPalindrone(string s , int i, int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        
        
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return checkPalindrone(s,i+1,j) || checkPalindrone(s,i,j-1);
            
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};