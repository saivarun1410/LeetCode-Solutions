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
    vector<string>v;
    void preorder(TreeNode*root, string s){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL){
            s+=to_string(root->val);
            v.push_back(s);
        }
        s+=to_string(root->val)+"->";
        preorder(root->left,s);
        preorder(root->right,s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
      string s="";
      preorder(root,s);
      return v;
    }
};
