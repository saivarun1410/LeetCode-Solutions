class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int l=nums.size();
        for(int i=0;i<l;i++){
            s.insert(nums[i]);
        }
        if(l==0) return 0;
        int maxi=1;
        for(int it:nums){
            if (s.count(it-1)==0) {
                int curval=it;
                int count=1;
            while(s.count(curval+1)){
                count++;
                maxi=max(maxi,count);
                curval=curval+1;
                }
            }
        }
        return maxi;
    }
};