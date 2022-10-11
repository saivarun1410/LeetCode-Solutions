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
    int count=0;
    pair<int,int>dfs(TreeNode *root){
        if(root==NULL) return {0,0};
        pair<int,int>ans={root->val,1};
        {
            pair<int,int>left=dfs(root->left);
            ans.first+=left.first;
            ans.second+=left.second;
        }
        {
            pair<int,int>right=dfs(root->right);
            ans.first+=right.first;
            ans.second+=right.second;
        }
        if(ans.first/ans.second==root->val) count++;
        return ans;
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return count;
    }
};