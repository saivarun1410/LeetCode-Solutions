class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int begin=0,end=0,sum=0,res=0;
        unordered_map<int,int> mp;
        while(end<nums.size()){
            if(mp[nums[end]]){
                while(mp[nums[end]]){ 
                    mp[nums[begin]]--;
                    sum-=nums[begin];
                    begin++;
                }
            }
            else{ 
                sum+=nums[end];
                res=max(res,sum); 
                mp[nums[end]]++;
                end++;
            }
        }
        return res;
    }
};