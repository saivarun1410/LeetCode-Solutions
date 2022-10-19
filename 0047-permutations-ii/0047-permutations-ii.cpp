class Solution {
public:
    set<vector<int>>s;
    void f(int pos,int n,vector<int>&nums){
        if(pos==n){
            s.insert(nums);
            return;
        }
        for(int i=pos;i<n;i++){
            swap(nums[i],nums[pos]);
            f(pos+1,n,nums);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        f(0,n,nums);
        vector<vector<int>>res;
        for(auto it:s){
            res.push_back(it);
        }
        return res;
    }
};