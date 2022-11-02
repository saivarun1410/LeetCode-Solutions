class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1,j=0,i=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0)k--;
            if(k<0&&nums[j++]==0)k++;
        }
        return i-j-1;
    }
};