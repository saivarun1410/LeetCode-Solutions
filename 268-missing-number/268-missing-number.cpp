class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>a;
        for(int i=1;i<=nums.size();i++){
            a.push_back(i);
        }
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(a[i]!=nums[i]){
                res=a[i];
            }
        }
        return res;
    }
};