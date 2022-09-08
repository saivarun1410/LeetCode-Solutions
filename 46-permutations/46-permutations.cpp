class Solution {
public:
    vector<vector<int>>s;
    void per(int i, vector<int> ds, vector<int>nums, int freq[]){
        if(ds.size()==nums.size()){
            s.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;;
                per(i+1, ds, nums, freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++){
            freq[i]=0;
        }
        vector<int>ds;
        per(0,ds,nums,freq);
        return s;
    }
};