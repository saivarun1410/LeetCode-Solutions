/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void GTC(TreeNode*&o,TreeNode*&c,TreeNode*&ans, TreeNode*& target){
        if(o==NULL) return;
        if(o==target) {
            ans=c; 
            return;
        }
        else{
            GTC(o->left,c->left,ans,target);
            GTC(o->right,c->right,ans,target);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode*o=original;
        TreeNode*c=cloned;
        TreeNode*ans;
        GTC(o,c,ans,target);
        return ans;
    }
};