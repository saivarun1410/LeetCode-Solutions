class Solution {
public:
    void f(int i, int j, vector<vector<int>>&image,int m ,int n,int oldColor, int color){
        if(i<0||j<0||i>=m||j>=n||image[i][j]!=oldColor) return;
        if(image[i][j]==oldColor) image[i][j]=color;
        f(i+1,j,image,m,n,oldColor,color);
        f(i-1,j,image,m,n,oldColor,color);
        f(i,j+1,image,m,n,oldColor,color);
        f(i,j-1,image,m,n,oldColor,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor=image[sr][sc];
        if(oldColor==color) return image;
        int m=image.size();
        int n=image[0].size();
        f(sr,sc,image,m,n,oldColor,color);
        return image;
    }
};