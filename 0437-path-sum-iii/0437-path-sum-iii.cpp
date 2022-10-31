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
    void path(TreeNode *root,long int targetsum){
        if(root==NULL) return ;
        if(targetsum==root->val) count++; 
        path(root->left,targetsum-root->val);
        path(root->right,targetsum-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root){
            path(root,targetSum);
            pathSum(root->left,targetSum);
            pathSum(root->right,targetSum);
        }
        return count;
    }
};

