class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<priority_queue<int, std::vector<int> ,std::greater<int>>>pq(m+n-1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                pq[m-i+j-1].push(mat[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=pq[m-i+j-1].top();
                pq[m-i+j-1].pop();
            }
        }
        return mat;
    }
};
