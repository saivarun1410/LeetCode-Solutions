class Solution {
public:
    vector<vector<int>>s;
    void comb(int idx, vector<int> candidates, vector<int> res, int target){
        if(target==0){
            s.push_back(res);
            return ;
        }
        for(int i=idx; i<candidates.size(); i++){
            if(i>idx&&candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            res.push_back(candidates[i]);
            comb(i+1, candidates, res, target-candidates[i]);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>res;
        sort(candidates.begin(),candidates.end());
        comb(0, candidates, res, target);
        return s;
    }
};