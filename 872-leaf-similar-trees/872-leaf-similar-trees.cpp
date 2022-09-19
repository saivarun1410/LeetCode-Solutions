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
    void sol(TreeNode*root,vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL) ans.push_back(root->val);
        else{
            sol(root->left,ans);
            sol(root->right,ans);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>treeA;
        vector<int>treeB;
        sol(root1,treeA);
        sol(root2,treeB);
        if(treeA.size()!=treeB.size()) return false;
        else{
            for(int i=0;i<treeA.size();i++){
                if(treeA[i]!=treeB[i]) return false;
            }
        }
        return true;
    }
};