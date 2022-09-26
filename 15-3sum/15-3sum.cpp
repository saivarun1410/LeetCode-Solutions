class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<l;i++){
            int front=i+1;
            int back=l-1;
            while(front<back){
                if(nums[front]+nums[back]>-nums[i]) back--;
                else if(nums[front]+nums[back]<-nums[i]) front++;
                else if(nums[i]+nums[front]+nums[back]==0){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[front]);
                    v.push_back(nums[back]);
                    res.push_back(v);
                    while(front<back&&nums[front]==nums[front+1])front++;
                    while(front<back&&nums[back]==nums[back-1])back--;
                    front++; back--;
                }
                else continue;
            }
            while(i+1<l&&nums[i]==nums[i+1])i++;
        }
        return res;
    }
};
