class Solution {
public:
    vector<vector<int>>res;
    void f(int i, int n, vector<int>&nums, vector<int>&v){
        if(i==n){
            res.push_back(v);
            return ;
        }
        v.push_back(nums[i]);
        f(i+1,n,nums,v);
        v.pop_back();
        f(i+1,n,nums,v);
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        f(0,n,nums,v);
        return res;
    }
};