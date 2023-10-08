class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int count = 0; // Counter to keep track of the number of visited nodes
        int result = 0; // Variable to store the kth smallest value
        
        inorderTraversal(root, k, count, result); // Perform inorder traversal
        
        return result; // Return the kth smallest value
    }
    
    void inorderTraversal(TreeNode* node, int k, int& count, int& result) {
        if (node == nullptr) {
            return;
        }
        
        // Traverse the left subtree
        inorderTraversal(node->left, k, count, result);
        
        // Process the current node
        count++;
        if (count == k) {
            result = node->val; // Update the result when kth smallest value is found
            return;
        }
        
        // Traverse the right subtree
        inorderTraversal(node->right, k, count, result);
    }
};