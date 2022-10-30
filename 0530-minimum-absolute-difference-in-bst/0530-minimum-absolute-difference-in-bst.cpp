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
    int mini=INT_MAX;
    vector<int>v;
    void inorder(TreeNode *root){
        if(root==NULL) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        return;
    }
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL) return 0;
        inorder(root);
        for(int i=0;i<v.size()-1;i++){
            cout<<v[i];
            mini=min(mini,abs(v[i]-v[i+1]));
        }
        return mini;
    }
};