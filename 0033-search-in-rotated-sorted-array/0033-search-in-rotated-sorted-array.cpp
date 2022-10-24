class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        int start=low;
        high=n-1;
        low=0;
        if(target>=nums[start]&&target<=nums[high]){
            low=start;
        }
        else{
            high=start;
        }
        int mid=0;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target)high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};
