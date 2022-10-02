class Solution {
public:
    int dpsol(int i, vector<int>&dp, vector<int>&cost){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int left=dpsol(i+1,dp,cost)+cost[i];
        int right=dpsol(i+2,dp,cost)+cost[i];
        return dp[i]=min(left,right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(dp[1],dpsol(0,dp,cost));
    }
};