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

    bool check(TreeNode *root, int target){
        if(root == NULL)return false;

        if(root->left == NULL  && root->right == NULL and root->val == target){
            return true;
        }

        bool k = check(root->left, target);
        if(k)return true;
        k = check(root->right, target);
        if(k) return true;

        return false;
    }

    TreeNode* solve(TreeNode *root, int target){
        if(root == NULL)return NULL;
        if(root->left == NULL && root->right == NULL && root->val == target){
            return NULL;
        }
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);
        return root;

    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
        while(check(root, target)){
            root = solve(root, target);
        }
        return root;
    }
};