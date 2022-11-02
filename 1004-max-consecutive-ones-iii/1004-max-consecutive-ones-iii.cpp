class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,count=0,maxi=0;
        while(i<nums.size()){
            if(nums[i]==0) count++;
            while(count>k){
                if(nums[j]==0) count--;
                j++;
            }
            maxi=max(maxi,i-j+1);
            i++;
        }
        return maxi;
    }
};