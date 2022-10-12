class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
            m[nums[i]]++;
        }
        int ans=0;
        for(int i=1;i<=n+1;i++){
                if(m.count(i)==0){
                    return i;
            }
        }
        return ans;
    }
};