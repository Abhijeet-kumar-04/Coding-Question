class Solution {
public:
    unordered_map<TreeNode*,int>dp;
    int sum(TreeNode* root, TreeNode* root_fix ){
        if(root == NULL) return 0;
        if(root == root_fix) {
            return dp[root]=root->val + max(0,sum(root->left,root)) + max(0,sum(root->right,root));
        }
        else{
            if(dp.count(root)!=0) return dp[root];
            return dp[root]=root->val + max(0,max(sum(root->left,root) , sum(root->right,root)));
        }
        
    }
    int ans = INT_MIN;
    void bfs(TreeNode* root ){
        if(root == NULL) return ;
        int res = sum(root,root);
        ans = max(res,ans);
        bfs(root->left);
        bfs(root->right);
    }
    int maxPathSum(TreeNode* root) {
        bfs(root);
        return ans;
    }
};