class Solution {
public:
    int f(int ind, string s,int n,vector<vector<int>>&dp){
        if(n<=0) return 1;
        if(ind>=s.size()){
            return 0;
        }
        if(dp[ind][n]!=-1) return dp[ind][n];
        int notPick=f(ind+1,s,n,dp);
        int Pick=f(ind,s,n-1,dp);
        return dp[ind][n]=notPick+Pick;
    }
    int countVowelStrings(int n) {
        string s="aeiou";
        vector<vector<int>>dp(5,vector<int>(n+1,-1));
        return f(0,s,n,dp);
    }
};
