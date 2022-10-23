class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]==2){
                v.push_back(nums[i]);
            }
        }
        for(int i=1;i<=n;i++){
            if(m[i]==0){
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};