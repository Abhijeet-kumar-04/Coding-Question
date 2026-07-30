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
    int ans =0;
    void helper(TreeNode* root , long long sum ,long long target){
        if(root==NULL) return;
        if( sum + root->val == target) {ans++;}
        // if(sum + root->val > target) return;
        helper(root->left,sum+ root->val ,target);
        helper(root->right, sum + root->val ,target);
    }
    void dfs(TreeNode* root,long long target){
        if(root==NULL) return ;
        helper(root,0LL,target);
        dfs(root->left,target);
        dfs(root->right,target);
    }
    int pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
};