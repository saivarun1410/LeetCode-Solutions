class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),count=0;
        for(int i=0;i<m;i++){
            int low=0,high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(grid[i][mid]<0){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            count+=n-low;
        }
        return count;
    }
};
