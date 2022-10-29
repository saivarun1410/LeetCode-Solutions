class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                v1.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                v2.push_back(nums[i]);
            }
        }
        int p=0,q=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(v1[p]);
                p++;
            }
            else{
                ans.push_back(v2[q]);
                q++;
            }
        }
        return ans;
    }
};