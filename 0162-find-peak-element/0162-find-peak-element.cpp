class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==2){
            if(nums[0]>nums[1]) return 0;
            return 1;
        }
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return i;
            }
        }
        return n-1;
    }
};