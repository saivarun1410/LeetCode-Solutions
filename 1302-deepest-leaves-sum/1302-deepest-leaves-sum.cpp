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
    void findsum(TreeNode* root ,int cl,int maxi,int &sum) { 
        if (root==NULL) return ; 
        if (cl==maxi){ 
            sum+=root->val ; 
        }
        findsum(root->left,cl+1,maxi,sum) ; 
        findsum(root->right,cl+1,maxi,sum ) ; 
    }
    int depth(TreeNode *root){
        int left=0,right=0;
        if(root==NULL) return 0;
        left=depth(root->left);
        right=depth(root->right);
        return max(left,right)+1;
    }
    int deepestLeavesSum(TreeNode* root) {
        int deep = depth(root);
        int count=1;
        int sum1=0;
        findsum(root,count,deep,sum1);
        return sum1;
    }
};
