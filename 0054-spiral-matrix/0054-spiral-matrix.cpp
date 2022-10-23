class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          int m=matrix.size(),n=m?matrix[0].size():0,top=0,bottom=m-1,left=0,right=n-1,pos=0;
        vector<int>v(m*n);
        while(top<=bottom&&left<=right){
            for(int i=left;i<=right;i++){
                v[pos++]=matrix[top][i];
            }
            if(++top>bottom){
                 break;
            }
            for(int i=top;i<=bottom;i++){
                v[pos++]=matrix[i][right];
            }
            if(--right<left) {
                break;
            }
            for(int i=right;i>=left;i--){
                v[pos++]=matrix[bottom][i];
            }
            if(--bottom<top) {
                break;
            }
            for(int i=bottom;i>=top;i--){
                v[pos++]=matrix[i][left];
            }
            if(left++>right) {
                break;
            }
        }
        return v;
    }
};