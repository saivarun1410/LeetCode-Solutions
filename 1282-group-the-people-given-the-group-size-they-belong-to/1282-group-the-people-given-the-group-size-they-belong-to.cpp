class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>temp(groupSizes.size()+1);
        vector<vector<int>>ans;
        int l=groupSizes.size();
        for(int i=0;i<l;i++){
            temp[groupSizes[i]].push_back(i);
            if(temp[groupSizes[i]].size()==groupSizes[i]){
                ans.push_back(temp[groupSizes[i]]);
                temp[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};