class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s=="")return t[0];
int sum=0,i=0;
while(i<s.length())
{
sum+=s[i++];
}
i=0;
while(i<t.length())
{
sum-=t[i++];
}
sum=-1*sum;
return sum;
    }
};