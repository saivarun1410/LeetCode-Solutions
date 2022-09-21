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
    unordered_map<int,int>m;
    bool flag=false;
    void inorder(TreeNode *root,unordered_map<int,int>&m,int k){
        if(root==NULL) return;
        inorder(root->left,m,k);
        if(m[k-root->val]){flag=true; return;}
        else{m[root->val]=true;}
        inorder(root->right,m,k);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root,m,k);
        return flag;
    }
};