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
    
    TreeNode* insertIntoBST(TreeNode* root, int x) {
        if(root == NULL){
            TreeNode *curr = new TreeNode();
            curr->val = x;
            curr->left = NULL;
            curr->right = NULL;
            return curr;
        }
        
        if(x > root->val){
            root->right = insertIntoBST(root->right, x);    
        }
        else{
            root->left = insertIntoBST(root->left, x);
        }
        return root;
    }
};