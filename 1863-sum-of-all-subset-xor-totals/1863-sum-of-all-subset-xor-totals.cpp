class Solution {
public:
    vector<int>s;
    void fun(int i,vector<int>v, vector<int>nums){
        if(i==nums.size()){
            int x=0;
            for(int i=0;i<v.size();i++){
                x^=v[i];
            }
            s.push_back(x);return;
        }
        v.push_back(nums[i]);
        fun(i+1,v,nums);
        v.pop_back();
        fun(i+1,v,nums);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int>v;
        fun(0,v,nums);
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=s[i];
        }
        return sum;
    }
};