class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0){
                    dp[i][j]=matrix[i][j];
                }
                else if(matrix[i][j]==1){
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        int sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=dp[i][j];
            }
        }
        return sum;
    }
};