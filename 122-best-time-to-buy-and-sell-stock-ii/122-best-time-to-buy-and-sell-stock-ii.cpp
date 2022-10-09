class Solution {
public:
    int f(int i,int buy,vector<int> &prices,vector<vector<int>>&dp,int n){
        if(i==n) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy){
            dp[i][buy]=max(-prices[i]+f(i+1,0,prices,dp,n),f(i+1,1,prices,dp,n));
        }
        else{
            dp[i][buy]=max(+prices[i]+f(i+1,1,prices,dp,n),f(i+1,0,prices,dp,n));
        }
        return dp[i][buy];
    }
    int maxProfit(vector<int>& prices) {
        int l=prices.size();
        vector<vector<int>>dp(l,vector<int>(2,-1));
        return f(0,1,prices,dp,l);
    }
};

