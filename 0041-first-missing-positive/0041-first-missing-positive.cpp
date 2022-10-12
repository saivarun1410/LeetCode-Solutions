class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(int i=1;i<=n+1;i++){
            if(m.count(i)==0){
                return i;
            }
        }
        return 0;
    }
};