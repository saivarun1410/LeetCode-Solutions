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
    void inorder(TreeNode *root,vector<int>&A){
        if(root==NULL) return;
        inorder(root->left,A);
        A.push_back(root->val);
        inorder(root->right,A);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>A;
        inorder(root,A);
        TreeNode *newroot=new TreeNode(A[0]);
        TreeNode *temp=newroot;
        for(int i=1;i<A.size();i++){
            temp->right=new TreeNode(A[i]);
            temp=temp->right;
        }
        return newroot;
    }
};