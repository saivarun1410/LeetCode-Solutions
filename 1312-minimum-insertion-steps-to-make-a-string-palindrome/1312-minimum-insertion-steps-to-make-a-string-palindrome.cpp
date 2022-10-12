class Solution {
public:
    int f(int i, int j, string &s ,string &t, vector<vector<int>>&dp){
    if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int res=0;
    if(s[i]==t[j]){
        res=1+f(i-1,j-1,s,t,dp);
    }
    else{
        res=max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
       }
    return dp[i][j]=res;
}
   
    int minInsertions(string s) {
        string t=s;
        int l=s.size();
        reverse(t.begin(),t.end());
        vector<vector<int>>dp(l+1,vector<int>(l+1,-1));
        int ans=f(l-1,l-1,s,t,dp);
        return l-ans;
    }
};