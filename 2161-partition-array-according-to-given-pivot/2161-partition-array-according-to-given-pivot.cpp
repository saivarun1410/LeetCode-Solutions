class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>v;
        vector<int>s;
        int pivotcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                v.push_back(nums[i]);
            }
            if(nums[i]>pivot){
                s.push_back(nums[i]);
            }
            if(nums[i]==pivot) pivotcount++;
        }
        for(int i=0;i<pivotcount;i++){
            v.push_back(pivot);
        }
        for(int i=0;i<s.size();i++){
            v.push_back(s[i]);
        }
        return v;
    }
};