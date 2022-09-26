class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.size()==0) return ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int target2=long(target)-nums[i]-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    if(target2>nums[front]+nums[back]) front++;
                    else if(target2<nums[front]+nums[back]) back--;
                    else{
                        vector<int>q(4,0);
                        q[0]=nums[i];
                        q[1]=nums[j];
                        q[2]=nums[front];
                        q[3]=nums[back];
                        ans.push_back(q);
                        while(front<back&&nums[front]==q[2]) front++;
                        while(front<back&&nums[back]==q[3]) --back;
                    }
                }
                while(j+1<n&&nums[j]==nums[j+1])++j;
            }
            while(i+1<n&&nums[i]==nums[i+1])++i;
        }
        return ans;
    }
};