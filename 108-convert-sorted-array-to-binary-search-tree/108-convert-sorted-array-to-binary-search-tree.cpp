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
    TreeNode* fun(vector<int>&A, int begin,int end){
        if(begin>end) return NULL;
        int mid=(begin+end)/2;
        TreeNode *root=new TreeNode(A[mid]);
        root->left=fun(A,begin,mid-1);
        root->right=fun(A,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return fun(nums,0,nums.size()-1);
    }
};