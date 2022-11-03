class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        string nums=answerKey;
        int begin=0,end=0,maxi=0,count=0,n=nums.size();
        while(end<n){
            if(nums[end]=='F') count++;
            while(count>k){
                if(nums[begin]=='F') count--;
                begin++;
            }
            maxi=max(maxi,end-begin+1);
            end++;
        }
        begin=0,end=0;
        int maxi2=0;
        count=0,n=nums.size();
        while(end<n){
            if(nums[end]=='T') count++;
            while(count>k){
                if(nums[begin]=='T')count--;
                begin++;
            }
            maxi2=max(maxi2,end-begin+1);
            end++;
        }
        return max(maxi,maxi2);
    }
};