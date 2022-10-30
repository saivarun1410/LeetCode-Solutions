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
    int sum=0;
    void sumofLeft(TreeNode *root,int flag){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL){
            if(flag==0) sum+=root->val;
        }
        sumofLeft(root->left,0);
        sumofLeft(root->right,1);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int flag=1;
        sumofLeft(root,flag);
        return sum;
    }
};