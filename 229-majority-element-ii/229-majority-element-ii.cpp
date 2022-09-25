class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int l=nums.size()/3;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>l){
                v.push_back(i->first);
            }
        }
        return v;
    }
};