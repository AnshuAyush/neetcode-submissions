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

    vector<TreeNode*> solve(TreeNode *root, vector <TreeNode*> &path, TreeNode *target){
        if(root == NULL){
            return path;
        }
        if(root == target){
            return path;
        }
        path.push_back(root);
        path = solve(root->left, path, target);
        if(path[path.size() - 1] == target)return path;
        path = solve(root->right, path, target);
         if(path[path.size() - 1] == target)return path;
        return path;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr)return nullptr;

        if (root == p || root == q)return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if(!left)return right;
        if(!right)return left;
        if(left && right)return root;
        return NULL;  
    }
};
