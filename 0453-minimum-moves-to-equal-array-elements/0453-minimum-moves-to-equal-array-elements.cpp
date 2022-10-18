class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX,sum=0;
        for(auto i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
        }
        for(auto i=0;i<nums.size();i++){
            sum+=nums[i]-mini;
        }
        return sum;
    }
};