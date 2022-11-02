class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0,sum=0;
        int max_sum=k*threshold;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(i<k-1) continue;
            if(i>k-1)sum-=arr[i-k];
            if(sum>=max_sum) count++;
        }
        return count;
    }
};