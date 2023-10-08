/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool isMirror(TreeNode* p, TreeNode* q) {
        //dono  ki value null ho to true hoga
        if(!p && !q) return true;
        
        
        // dono me value h mtlb identical h
        if(p && q){
            // checking there valye dono me value h par identical bhi honichaiye
            return (p->val == q->val)
                // ab left or rightt ki bhi chekc kr lenge
                && isMirror(p->left, q->right)
                &&  isMirror(p->right, q->left) ;
        }
        
        //isme se kuch nhi h ot false
        
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left,root->right);
    }
};