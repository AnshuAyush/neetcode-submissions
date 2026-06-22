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
    vector<vector<int>> solve(TreeNode *root){

        queue <TreeNode*> q;
        q.push(root);
        vector <vector<int>> ans;
        vector <int> dummy;
        dummy.push_back(root->val);
        ans.push_back(dummy);

        while(q.size()){
            int size = q.size();
            dummy.clear();
            for(int i = 0; i < size; i++){
                TreeNode *curr = q.front();
                q.pop();

                if(curr->left){
                    q.push(curr->left);
                    dummy.push_back(curr->left->val);
                }
                if(curr->right){
                    q.push(curr->right);
                    dummy.push_back(curr->right->val);
                }
            }
            if(dummy.size())ans.push_back(dummy);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return {};

        vector<vector<int>> ans = solve(root);

        vector <int> ret;
        for(int i = 0; i < ans.size(); i++){
            ret.push_back(ans[i][ans[i].size() - 1]);
        }
        return ret;
    }
};
