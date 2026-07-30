class Solution {
public:
    int solve(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int left = solve(root->left);
        int right = solve(root->right);

        return 1 + max(left, right);
    }

    int maxDepth(TreeNode* root) {
        if(!root)return 0;

        return 1 + max(solve(root->left), solve(root->right));
    }
};