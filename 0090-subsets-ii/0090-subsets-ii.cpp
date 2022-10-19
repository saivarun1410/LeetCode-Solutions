class Solution {
public:
    vector<vector<int>>res;
    void f(int i, int n,vector<int>&nums,vector<int>&ans){
        if(i==n){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        f(i+1,n,nums,ans);
        ans.pop_back();
        while(i+1<n&&nums[i]==nums[i+1])i++;
        f(i+1,n,nums,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        f(0,n,nums,ans);
        return res;
    }
};