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
    bool isS(TreeNode*left,TreeNode*right){
        if(left==NULL||right==NULL) return left==right;
        if(left->val!=right->val) return false;
        return isS(left->left,right->right)&&isS(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return 0;
        return isS(root->left,root->right);
    }
};