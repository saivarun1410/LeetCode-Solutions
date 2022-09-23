class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=nums.size();
        int low=0;
        int mid=0;
        int high=l-1;
        while(mid<=high){
            switch(nums[mid]){
                case 0:swap(nums[low++],nums[mid++]); break;
                case 1:mid++; break;
                case 2:swap(nums[mid],nums[high--]); break;
            }
        }
    }
};