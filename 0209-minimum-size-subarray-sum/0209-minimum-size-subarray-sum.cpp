class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int begin=0,end=0,mini=INT_MAX,sum=0;
        while(end<nums.size()){
            sum+=nums[end];
            while(sum>=target){
                mini=min(mini,end-begin+1);
                sum-=nums[begin++];
            }
            end++;
        }
        if(mini!=INT_MAX) return mini;
        return 0;
    }
};