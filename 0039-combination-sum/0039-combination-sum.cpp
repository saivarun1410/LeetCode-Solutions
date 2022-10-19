class Solution {
public:
    vector<vector<int>>ans;
    void f(int i,int n, int target, vector<int>&nums,vector<int>&v){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(i==n) return;
        if(target>=nums[i]){
            v.push_back(nums[i]);
            f(i,n,target-nums[i],nums,v);
            v.pop_back();
        }
        f(i+1,n,target,nums,v);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>v;
        f(0,n,target,candidates,v);
        return ans;
    }
};