class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        set<pair<int,int>>s;
        for(auto it:m){
            s.insert({it.second,it.first});
        }
        vector<int>temp;
        for(auto it:s){
            temp.push_back(it.second);
        }
        vector<int>v;
        reverse(temp.begin(),temp.end());
        for(int i=0;i<k;i++){
            v.push_back(temp[i]);
        }
        return v;
    }
};