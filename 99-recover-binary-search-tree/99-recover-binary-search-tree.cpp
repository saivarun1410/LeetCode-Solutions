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
    vector<int>g;
    void inorder(TreeNode* root)
    {
        if(root==NULL) return;
        inorder(root->left);
        g.push_back(root->val);
        inorder(root->right);
    }
    void traversal(TreeNode* &root,int start,int end)
    {
        if(root==NULL)return;
        if(root->val==start)root->val=end;
        else if(root->val==end)root->val=start;
        traversal(root->left,start,end);
        traversal(root->right,start,end);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        vector<int>og;
        for(int i=0;i<g.size();i++)
        {
            og.push_back(g[i]);
        }
        sort(og.begin(),og.end());
        int start,end;
        for(int i=0;i<g.size();i++)
        {
            if(g[i]!=og[i])
            {
                start=g[i];
                end=og[i];
                break;
            }
        }
        traversal(root,start,end);
    }
};