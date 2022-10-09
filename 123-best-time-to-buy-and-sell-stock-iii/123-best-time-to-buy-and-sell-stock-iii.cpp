class Solution {
public:
    int f(int i,int buy,int cap,vector<int>&prices,vector<vector<vector<int>>>&dp,int n){
    if(i==n) return 0;
    if(cap==0) return 0;
    if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
    if(buy){
        dp[i][buy][cap]=max(-prices[i]+f(i+1,0,cap,prices,dp,n),0+f(i+1,1,cap,prices,dp,n));
    }
    else{
        dp[i][buy][cap]=max(prices[i]+f(i+1,1,cap-1,prices,dp,n),0+f(i+1,0,cap,prices,dp,n));
    }
    return dp[i][buy][cap];
}
    int maxProfit(vector<int>& prices) {
    int l=prices.size();
    vector<vector<vector<int>>>dp(l,vector<vector<int>>(2,vector<int>(3,-1)));
    return f(0,1,2,prices,dp,l);
    }
};