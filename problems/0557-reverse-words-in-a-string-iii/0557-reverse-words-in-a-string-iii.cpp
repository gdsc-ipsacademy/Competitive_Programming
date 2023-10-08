class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.size(); ++ i) {
            if (s[i] == ' ') continue;
            int j = i;
            while (j < s.size() && s[j] != ' ') ++ j;
            reverse(s.begin() + i, s.begin() + j);
            i = j - 1;
        }
        return s;
    }
};