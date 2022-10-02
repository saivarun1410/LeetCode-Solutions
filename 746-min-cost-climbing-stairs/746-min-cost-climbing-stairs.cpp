class Solution {
public:
    int dpsol(int i,int length, vector<int>&dp, vector<int>&cost){
        if(i>=length) return 0;
        if(dp[i]!=-1) return dp[i];
        int left=dpsol(i+1,length,dp,cost)+cost[i];
        int right=dpsol(i+2,length,dp,cost)+cost[i];
        return dp[i]=min(left,right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(dp[1],dpsol(0,n,dp,cost));
    }
};