class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag1=true,flag2=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                flag1=false;
            }
            if(nums[i]<nums[i+1]){
                flag2=false;
            }
        }
        return flag1||flag2;
    }
};