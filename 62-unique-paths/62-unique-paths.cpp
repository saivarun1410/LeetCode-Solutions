class Solution {
public:
    int unq(int m,int n,vector<vector<int>>&dp){
        if(m==0||n==0) return 0;
        if(m==1&&n==1) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n]=unq(m-1,n,dp)+unq(m,n-1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int ans=unq(m,n,dp);
        return ans;
    }
};