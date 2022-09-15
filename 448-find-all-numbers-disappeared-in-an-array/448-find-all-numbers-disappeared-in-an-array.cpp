class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>n(nums.size()+1,0);
        vector<int>m{};
        for(int i=0;i<nums.size();i++){
            n[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(!n[i]) m.push_back(i);
        }
        return m;
    }
};
    