class Solution {
public:
    vector<vector<int>>res;
    void f(int i, int n, vector<int>&ans,vector<int>&nums,int fr[]){
        if(ans.size()==n){
            res.push_back(ans);
            return;
        }
        for(int i=0;i<n;i++){
            if(fr[i]==0){
                ans.push_back(nums[i]);
                fr[i]=1;
                f(i+1,n,ans,nums,fr);
                fr[i]=0;
                ans.pop_back();
            }
        }
        //return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int fr[n];
        vector<int>ans;
        for(int i=0;i<n;i++){
            fr[i]=0;
        }
        f(0,n,ans,nums,fr);
        return res;
    }
};