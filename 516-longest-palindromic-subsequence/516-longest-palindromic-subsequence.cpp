class Solution {
public:
    int lcs(string s, string t){
        int l1=s.size();
        int l2=t.size();
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,0));
        for(int i=0;i<=l1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=l1;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=l1;i++){
            for(int j=1;j<=l2;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[l1][l2];
    }
    int longestPalindromeSubseq(string s) {
        string t="";
        for(int i=s.size()-1;i>=0;i--){
            t+=s[i];
        }
        return lcs(s,t);
    }
};