class Solution {
public:
    bool isAnagram(string s, string t) {
        
//Brute Force Approach
        // sort(s.begin(),s.end());
        //  sort(t.begin(),t.end());
        // if(s==t)
        // {
        //     return true;
        // }
        // return false;
        
      int freqTable[256]={0};
        
        for (int i=0;i<s.size();i++)
        {
            freqTable[s[i]]++;
        }
        
          for (int i=0;i<t.size();i++)
        {
            freqTable[t[i]]--;
        }
        
        
              
          for (int i=0;i<256;i++)
        {
            if(freqTable[i] !=0)
            {
                return false;
            }
        }
        return true;
        
    }
};