class Solution {
public:
    int f(int ind1, int ind2, string s1, string s2, vector<vector<int>>&dp){
        int Pick=0,notPick=0;
        if(ind1<0||ind2<0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2]){
            Pick=1+f(ind1-1,ind2-1,s1,s2,dp);
        }
        else{
            notPick=max(f(ind1-1,ind2,s1,s2,dp),f(ind1,ind2-1,s1,s2,dp));
        }
        return dp[ind1][ind2]=max(Pick,notPick);
    }
    int minDistance(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,-1));
        int ans=(f(l1-1,l2-1,word1,word2,dp));
        return (l1+l2)-2*ans;
    }
};