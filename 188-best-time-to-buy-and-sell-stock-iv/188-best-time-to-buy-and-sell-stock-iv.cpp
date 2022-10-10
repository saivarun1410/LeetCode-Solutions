class Solution {
public:
    int f(int i, int tran, int n, int k, vector<int>&prices, vector<vector<int>>&dp){
        if(i==n||tran==2*k) return 0;
        if(dp[i][tran]!=-1) return dp[i][tran];
        if(tran%2==0){
            dp[i][tran]=max(-prices[i]+f(i+1,tran+1,n,k,prices,dp),f(i+1,tran,n,k,prices,dp));
        }
        else{
            dp[i][tran]=max(prices[i]+f(i+1,tran+1,n,k,prices,dp),f(i+1,tran,n,k,prices,dp));
        }
        return dp[i][tran];
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2*k,-1));
        return f(0,0,n,k,prices,dp);
    }
};