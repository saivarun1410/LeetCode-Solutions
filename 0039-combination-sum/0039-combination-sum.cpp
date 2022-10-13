class Solution {
public:
    void f(int i, int n, int target, vector<int>&v, vector<vector<int>>&ans,vector<int>&nums){
        if(target==0){
            ans.push_back(v);
            return ;
        }
        if(i==n) return ;
        if(nums[i]<=target){
            v.push_back(nums[i]);
            f(i,n,target-nums[i],v,ans,nums);
            v.pop_back();
        }
        f(i+1,n,target,v,ans,nums);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>v;
        vector<vector<int>>ans;
        f(0,n,target,v,ans,candidates);
        return ans;
    }
};