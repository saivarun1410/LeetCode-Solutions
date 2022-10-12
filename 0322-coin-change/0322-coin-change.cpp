class Solution {
public:
    int f(int i, int n, int target, vector<int>&coins, vector<vector<int>>&dp){
        if(i==0){
            if(target%coins[0]==0) return target/coins[0];
            else return 1e9;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int take=1e9;
        if(coins[i]<=target){
            take=1+f(i,n,target-coins[i],coins,dp);
        }
        int notTake=0+f(i-1,n,target,coins,dp);
        return dp[i][target]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=f(n-1,n,amount,coins,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};
