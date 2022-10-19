class Solution {
public:
    void f(int pos, int n, vector<int>&nums,vector<vector<int>>&res){
        if(pos==n){
            res.push_back(nums);
            return ;
        }
        for(int i=pos;i<n;i++){
            swap(nums[i],nums[pos]);
            f(pos+1,n,nums,res);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        vector<int>v;
        f(0,n,nums,res);
        return res;
    }
};