class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int begin=0,end=0,count=0,anscount=0,n=nums.size(),res=0;
        while(end<n){
            if(nums[end]%2==1) 
            {
                count++; 
                anscount=0;
            }
            while(count==k && begin<n){
                if(nums[begin]%2==1) count--;
                begin++;
                anscount++;
            }
            end++;
            res+=anscount;
        }
        return res;
    }
};
