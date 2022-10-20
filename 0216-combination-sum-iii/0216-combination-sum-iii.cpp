class Solution {
public:
    vector<vector<int>>ans;
    void f(int i,int target,int n, int k,vector<int>&nums,vector<int>&v){
        if(target==0){
            if(v.size()==k){
                ans.push_back(v);
            }
            return;
        }
        if(i==n) return;
        if(nums[i]<=target){
            v.push_back(nums[i]);
            f(i+1,target-nums[i],n,k,nums,v);
            v.pop_back();
        }
        f(i+1,target,n,k,nums,v);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        vector<int>v;
        f(0,n,9,k,nums,v);
        return ans;
    }
};