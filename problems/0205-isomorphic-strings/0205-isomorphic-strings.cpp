class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        int ischarMapped[256]={0};

        // first we will map
        for(int i=0;i<s.size();i++)
        {
            if(hash[s[i]]==0 && ischarMapped[t[i]]==0)
            {
                hash[s[i]]=t[i];
                ischarMapped[t[i]]=true;
            }
        }


        // Now we have now we will compare both the string

        for(int i=0; i< s.size();i++)
        {
            if(hash[s[i]]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};