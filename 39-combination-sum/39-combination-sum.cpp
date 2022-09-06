class Solution {
public:
    vector<vector<int>> sums;
    void rec(int idx, vector<int>seq, vector<int> candidates,int target){
        if(idx==candidates.size()){
            if(target==0){
                sums.push_back(seq);
            }
            return;
        }
        if(candidates[idx]<=target){
            seq.push_back(candidates[idx]);
            rec(idx,seq,candidates,target-candidates[idx]);
            seq.pop_back();
        }
            rec(idx+1,seq,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>seq;
        rec(0,seq,candidates,target);
        return sums;
    }
};