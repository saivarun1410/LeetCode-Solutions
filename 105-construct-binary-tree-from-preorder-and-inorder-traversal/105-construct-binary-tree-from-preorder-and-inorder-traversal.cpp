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
    TreeNode* PI(vector<int>preorder, int prestart,int preend, vector<int>inorder, int instart,int inend, map<int,int>&m){
        //if(preorder.size()==0&&inorder.size()==0) return NULL;
        if(prestart>preend||instart>inend) return NULL;
        TreeNode *root=new TreeNode(preorder[prestart]);
        int pos=m[root->val];
        int left=pos-instart;
        root->left=PI(preorder,prestart+1,prestart+left,inorder,instart,pos-1,m);
        root->right=PI(preorder,prestart+left+1,preend,inorder,pos+1,inend,m);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        TreeNode*root=PI(preorder, 0,preorder.size()-1,inorder,0,inorder.size()-1,m);
        return root;
    }
};