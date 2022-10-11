class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j==0) dp[i][j]=grid[i][j];
                else{
                    int left=grid[i][j];
                    int up=grid[i][j];
                    if(i>0){
                        left+=dp[i-1][j];
                    }
                    else{
                        left+=1e9;
                    }
                    if(j>0){
                        up+=dp[i][j-1];
                    }
                    else{
                        up+=1e9;
                    }
                    dp[i][j]=min(up,left);
                }
            }
        }
        return dp[m-1][n-1];
    }
};