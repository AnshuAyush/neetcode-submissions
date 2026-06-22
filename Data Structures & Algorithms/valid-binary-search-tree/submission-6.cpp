class Solution {
public:
    bool isValid(TreeNode* root, long long mn, long long mx) {
        if (root == nullptr)
            return true;

        if (root->val <= mn || root->val >= mx)
            return false;

        return isValid(root->left, mn, root->val) &&
               isValid(root->right, root->val, mx);
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root, LLONG_MIN, LLONG_MAX);
    }
};