class Solution {
public:
    int numTrees(int n) {
        vector<int>dp(n+1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int sum=0;
            cout<<i<<endl;
            for(int j=1;j<=i;j++){
                int leftbst=dp[j-1];
                cout<<"leftbst="<<leftbst<<" "<<endl;
                int rightbst=dp[i-j];
                cout<<"rightbst="<<rightbst<<" "<<endl;
                sum+=leftbst*rightbst;
                cout<<"sum="<<sum<<endl;
            }
            dp[i]=sum;
            cout<<endl;
        }
        return dp[n];
    }
};