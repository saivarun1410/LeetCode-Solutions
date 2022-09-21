class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    v.push_back(make_pair(i,j));
                }
            }
        }
        for(int i=0;i<v.size();i++){
            int m=v[i].first;
            int n=v[i].second;
            int j=0;
            while(j<matrix.size()){
                matrix[j][n]=0;
                j++;
            }
            int k=0;
            while(k<matrix[0].size()){
                matrix[m][k]=0;
                k++;
            }
        }
    }
};

   

 