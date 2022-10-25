class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSum=0,costSum=0;
        int m=gas.size();
        for(int i=0;i<m;i++){
            gasSum+=gas[i];
        }
        for(int i=0;i<m;i++){
            costSum+=cost[i];
        }
        int reqprice=0,start=0;
        if(costSum>gasSum) return -1;
        for(int i=0;i<m;i++){
            reqprice+=gas[i]-cost[i];
            if(reqprice<0){
                start=i+1;
                reqprice=0;
            }
        }
        return start;
    }
};