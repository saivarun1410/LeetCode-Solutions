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
    bool BST(TreeNode* root, long long max,long long min){
        if(root==NULL) return true;
        if(root->val>=max||root->val<=min) return false;
        return BST(root->left,root->val,min)&&BST(root->right,max,root->val);
    }
    bool isValidBST(TreeNode* root) {
        long long min = INT_MIN; min--;
        long long max = INT_MAX; max++;
        return BST(root,max,min);
    }
};