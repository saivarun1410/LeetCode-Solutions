//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxi=0;
    int helper(int i1, int i2, int l1, int l2, string &s1, string &s2, vector<vector<int>>&dp){
        if(i1==l1||i2==l2) return 0;
        if(dp[i1][i2]!=-1) return dp[i1][i2];
        int count=0;
        if(s1[i1]==s2[i2]){
            count=1+helper(i1+1,i2+1, l1,l2,s1,s2,dp);
            maxi=max(maxi,count);
        }
        int a=helper(i1+1,i2, l1,l2,s1,s2,dp);
        int b=helper(i1,i2+1, l1,l2,s1,s2,dp);
        return dp[i1][i2]=count;
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int res=helper(0,0,n,m,S1,S2,dp);
        return maxi;
    }
};


// } Driver Code Ends


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends