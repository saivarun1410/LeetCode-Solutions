class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int it:nums){
            pq.push(it);
        }
        int ans=0;
        while(k!=0&&!pq.empty()){
            ans=pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }
};