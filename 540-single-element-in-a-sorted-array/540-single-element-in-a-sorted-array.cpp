class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int begin=0;
        int begin2=1;
        int end=n-1;
        int end2=n-2;
        while(begin<n){
            if(nums[begin]!=nums[begin2]){
                return nums[begin];
            }
            else{
                begin=begin+2;
                begin2=begin2+2;
            }
            if(nums[end]!=nums[end2]){
                return nums[end];
            }
            else{
                end=end-2;
                end2=end2-2;
            }
        }
        return -1;
    }
};