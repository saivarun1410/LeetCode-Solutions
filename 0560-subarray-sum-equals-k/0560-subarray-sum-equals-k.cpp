class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(nums[i]==k) count++;
            if(m.find(nums[i]-k)!=m.end()){
                count+=m[nums[i]-k];
            }
            m[nums[i]]++;
        }
        return count;         
    }
};