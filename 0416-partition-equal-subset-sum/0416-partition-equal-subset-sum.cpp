class Solution {
public:
    bool f(int i, int target,int n, vector<int>&nums,vector<vector<int>>&dp){
        if(i==n) return false;
        if(target==0) return true;
        if(dp[i][target]!=-1) return dp[i][target];
        bool take=false;
        if(nums[i]<=target){
            take=+f(i+1,target-nums[i],n,nums,dp);
        }
        bool notTake=f(i+1,target,n,nums,dp);
        return dp[i][target]=take|notTake;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<n;i++){
            totsum+=nums[i];
        }
        if(totsum%2!=0) return false;
        vector<vector<int>>dp(n,vector<int>((totsum/2)+1,-1));
        return f(0,totsum/2,n,nums,dp);
    }
};