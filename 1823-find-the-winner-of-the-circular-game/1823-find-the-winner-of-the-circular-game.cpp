class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(q.size()!=1){
            int rotate=k;
            while(rotate>1){
                int first=q.front();
                q.pop();
                q.push(first);
                rotate--;
            }
            q.pop();
        }
        return q.front();
    }
};