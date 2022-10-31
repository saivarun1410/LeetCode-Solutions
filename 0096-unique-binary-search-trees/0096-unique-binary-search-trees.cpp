class Solution {
public:
    int memo[20][20];
    int trees(int low,int high){
        if(low>=high) return 1;
        int total=0;
        if(memo[low][high]!=0) return memo[low][high];
        for(int i=low;i<=high;i++){
            total+=trees(low,i-1)*trees(i+1,high);
        }
        return memo[low][high]=total;
    }
    int numTrees(int n) {
        return trees(1,n);
    }
};