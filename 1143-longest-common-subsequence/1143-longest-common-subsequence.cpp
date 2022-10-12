class Solution {
public:
    int res=0;
    int f(int i, int j, string &s, string &t,vector<vector<int>>&dp){
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            res=1+f(i-1,j-1,s,t,dp);
        }
        else{
            res=max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
        }
        return dp[i][j]=res;;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int l1=text1.size();
        int l2=text2.size();
        vector<vector<int>>dp(l1,vector<int>(l2,-1));
        return f(l1-1,l2-1,text1,text2,dp);
    }
};