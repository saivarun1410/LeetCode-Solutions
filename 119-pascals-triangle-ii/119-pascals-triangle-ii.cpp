class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v(rowIndex+1);
        vector<int>s;
        for(int i=0;i<rowIndex+1;i++){
            v[i].resize(i+1);
            v[i][0]=v[i][i]=1;
            for(int j=1;j<i;j++){
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
        int l=v.size();
        for(int j=0;j<v[l-1].size();j++){
             s.push_back(v[l-1][j]);
        }
        return s;
    }
};