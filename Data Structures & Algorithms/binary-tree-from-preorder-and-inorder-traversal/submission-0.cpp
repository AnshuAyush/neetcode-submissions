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
    map <int, int> mp;
    int idx = 0;
    TreeNode* solve(vector <int> v, int low, int high){
        
        if(low > high)return NULL;

        TreeNode *root = new TreeNode(v[idx]);
        int mid = mp[root->val];
        idx += 1;
        root->left = solve(v, low, mid - 1);
        root->right = solve(v, mid + 1, high);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for(int i = 0; i < inorder.size(); i++){
            mp[inorder[i]] = i;
        }

        return solve(preorder, 0, inorder.size() - 1);
    }
};
