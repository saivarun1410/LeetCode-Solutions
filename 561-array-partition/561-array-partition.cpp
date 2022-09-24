class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int count=0;
        for(int i=n-1;i>=0;i=i-2){
            if(count==n/2) break;
            sum+=min(nums[i],nums[i-1]);
            count++;
        }
        return sum;
    }
};