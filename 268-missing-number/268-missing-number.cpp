class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsum=0;
        int actualsum=0;
        for(int i=0;i<nums.size();i++){
            numsum+=nums[i];
        }
        for(int i=1;i<=nums.size();i++){
            actualsum+=i;
        }
        return (actualsum-numsum);
    }
};