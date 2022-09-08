class Solution {
public:
    vector<vector<int>> v;
    void ans(int ind, vector<int>ds, vector<int>nums ){
        v.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind&&nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            ans(i+1, ds, nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        ans(0, ds, nums);
        return v;
    }
};