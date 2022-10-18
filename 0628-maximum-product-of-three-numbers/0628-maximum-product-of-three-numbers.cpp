class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int pos=nums[n-1]*nums[n-2];
        int neg=nums[0]*nums[1];
        int maxi=INT_MIN;
        int maxi1=INT_MIN;
        for(int i=2;i<n;i++){
            maxi=max(maxi,neg*nums[i]);
        }
        for(int i=0;i<n-2;i++){
            maxi1=max(maxi1,pos*nums[i]);
        }
        return max(maxi,maxi1);
    }
};