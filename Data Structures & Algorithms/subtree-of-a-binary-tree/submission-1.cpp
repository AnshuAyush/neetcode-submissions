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
    bool solve(TreeNode *p, TreeNode *q){
        if(p == NULL && q == NULL)return true;
        if(p == NULL && q != NULL || p != NULL && q == NULL)return false;
        if(p->val != q->val)return false;
    

        bool k = solve(p->left, q->left);
        if(!k)return false;
        k = solve(p->right, q->right);
        if(!k)return false;

        return true;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(!root)return false;
        
        bool k;

        if(root->val == subRoot->val){
            k = solve(root, subRoot);
            cout << k << " ";
            if(k)return true;
        }
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};
