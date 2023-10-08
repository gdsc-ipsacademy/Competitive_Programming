class Solution {
public:
    bool isVowel(char &ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
    int maxVowels(string s, int k) {
        int n = s.length();
        
        int maxV  = 0;
        int count = 0;
        int i = 0, j = 0;
        
        while(j < n) {
            
            if(isVowel(s[j]))
                count++;
            
            if(j-i+1 == k) {
                maxV = max(maxV, count);
                if(isVowel(s[i]))
                    count--;
                i++;
            }
            
            j++;
        }
        
        return maxV;
    }
};