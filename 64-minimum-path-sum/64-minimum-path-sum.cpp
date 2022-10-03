class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j==0){
                    dp[i][j]=grid[i][j];
                }
                else{
                    int down=grid[i][j];
                    int right=grid[i][j];
                    if(i>0){
                        down+=dp[i-1][j];
                    }
                    else{
                        down+=1e9;
                    }
                    if(j>0){
                        right+=dp[i][j-1];
                    }
                    else{
                        right+=1e9;
                    }
                    dp[i][j]=min(right,down);
                }
            }
        }
        return dp[m-1][n-1];
    }
};