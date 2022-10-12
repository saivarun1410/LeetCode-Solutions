class Solution {
public:
    int f(int i, int target, vector<int>&coins, vector<vector<int>>&dp){
        if(target==0) return 1;
        if(i==0) return target%coins[0]==0;
        if(dp[i][target]!=-1) return dp[i][target];
        int pick=0;
        if(coins[i]<=target){
            pick=f(i,target-coins[i],coins,dp);
        }
        int notpick=f(i-1,target,coins,dp);
        return dp[i][target]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(n-1,amount,coins,dp);
    }
};