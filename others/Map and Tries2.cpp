#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26]; // Changed 25 to 26 to account for all English lowercase letters

    bool isTerminal;

    TrieNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insertWord(TrieNode *root, string word)
{
    // Base case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }
    
    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;
    
    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    
    insertWord(child, word.substr(1));
}

bool searchWord(TrieNode *root, string word)
{
    // Base case
    if (word.length() == 0)
    {
        return root->isTerminal;
    }
    
    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;
    
    if (root->children[index] != NULL)
    {
        child = root->children[index];
        // You need to return the result of the recursive call.
        return searchWord(child, word.substr(1));
    }
    else
    {
        return false;
    }
}

int main()
{
    TrieNode *root = new TrieNode('-');

    insertWord(root, "coding");
    insertWord(root, "code");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    insertWord(root, "baba");
    insertWord(root, "babu");

    if (searchWord(root, "babu"))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    return 0;
}
