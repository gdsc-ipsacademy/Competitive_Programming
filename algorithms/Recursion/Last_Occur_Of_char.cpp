#include <iostream>
using namespace std;
void lastOccur(string &s, char x, int i, int &ans)
{
    // base case
    if (i > +s.size())
        return;

    // ek case solve krdo
    if (s[i] == x)
    {
        ans = i;
    }

     // recursion call
    lastOccur(s, x, i + 1, ans);

   
}

int main()
{

    string s;
    cin >> s;
    char x;
    cin >> x;

    int ans = -1;

    lastOccur(s, x, 0, ans);
    cout << ans;
}
