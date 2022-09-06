class Solution {
public:
    vector<vector<int>>subs;
    void sub(int i, vector<int> &striver, vector<int> &nums, int size){
        if(i==size){
            subs.push_back(striver);
            return ;
        }
        striver.push_back(nums[i]);
        sub(i+1,striver,nums,size);
        striver.pop_back();
        sub(i+1,striver,nums,size);
    }
        vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>striver;
        sub(0,striver,nums,nums.size());
        return subs;
    }
};