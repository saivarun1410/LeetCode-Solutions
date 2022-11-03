class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int windowStart=0,windowEnd=0,mini=INT_MAX,sum=0,n=nums.size();
        for(windowEnd=0;windowEnd<n;windowEnd++){
            sum+=nums[windowEnd];
            //cout<<sum<<" ";
            while(windowStart<n&&sum>=target){
                mini=min(mini,windowEnd-windowStart+1);
                sum-=nums[windowStart++];
                //cout<<sum<<endl;
            }
        }
        if(mini==INT_MAX) return 0;
        return mini;
    }
};