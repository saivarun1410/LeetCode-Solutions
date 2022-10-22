class Solution {
public:
    bool f(int i, int j, vector<vector<char>>& board,string word, int m,int n,int k){
        if(k==word.size()) return true;
        if(i<0||j<0||i>=m||j>=n||board[i][j]!=word[k]) return false;
        board[i][j]=word[k];
        board[i][j]='#';
        bool op1=f(i+1,j,board,word,m,n,k+1);
        bool op2=f(i-1,j,board,word,m,n,k+1);
        bool op3=f(i,j+1,board,word,m,n,k+1);
        bool op4=f(i,j-1,board,word,m,n,k+1);
        board[i][j]=word[k];
        return op1||op2||op3||op4;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(f(i,j,board,word,m,n,0)) return true;
                }
            }
        }
        return false;
    }
};