#include <iostream>
#include <unordered_map>

using namespace std;

// bool checkCircular(Node * head)
// {
// unordered_map<node*, bool>vis;

// Node*temp=head;
 

//  while(temp !=NULL)
//  {
//     if(is.find(temp) != vis.end())
//     {
//         vis[temp]=true;
//     }
//     else
//     {
//         return true;
//     }
//     temp=temp->next;
//  }
//  return false;

//     }


int main()
{
    string str = "thiruvananthapuram";
    unordered_map<char, int> freq;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        freq[ch]++;
    }

    for (auto i : freq)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}