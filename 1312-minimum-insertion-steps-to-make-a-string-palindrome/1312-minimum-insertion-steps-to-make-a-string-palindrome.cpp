class Solution {
public:
    int f(int ind1,int ind2,string s1, string s2, vector<vector<int>>&dp){
        int pick=0,notpick=0;
        if(ind1<0||ind2<0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2]){
            pick=1+f(ind1-1,ind2-1,s1,s2,dp);
        }
        else{
            notpick=max(f(ind1,ind2-1,s1,s2,dp),f(ind1-1,ind2,s1,s2,dp));
        }
        return dp[ind1][ind2]=max(pick,notpick);
    }
    int minInsertions(string s) {
        string s1=s;
        int l1=s.size();
        int l2=s1.size();
        reverse(s1.begin(),s1.end());
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,0));
        for(int i=0;i<=l1;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=l2;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=l1;i++){
            for(int j=1;j<=l2;j++){
                if(s[i-1]==s1[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int ans=dp[l1][l2];
        return l1-ans;
    }
};