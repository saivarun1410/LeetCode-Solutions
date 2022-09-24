class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(auto i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second>=2){
                return i->first;
            }
        }
        return 0;
    }
};