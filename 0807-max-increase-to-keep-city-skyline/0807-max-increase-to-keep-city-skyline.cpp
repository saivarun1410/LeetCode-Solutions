class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>ans=grid;
        vector<int>r;
        vector<int>c;
        for(int i=0;i<m;i++){
            int maxi=INT_MIN;
            for(int j=0;j<n;j++){
                maxi=max(maxi,grid[i][j]);
            }
            r.push_back(maxi);
        }
        for(int i=0;i<m;i++){
            int maxi=INT_MIN;
            for(int j=0;j<n;j++){
                maxi=max(maxi,grid[j][i]);
            }
            c.push_back(maxi);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=min(r[i],c[j]);
            }
        }
        int sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=grid[i][j]-ans[i][j];
            }
        }
        return sum;
    }
};