class Solution {
public:
 int helper(vector<int>& nums, int x, int y){
        int n = nums.size();
        vector<int> dp1(n, 0);
        vector<int> dp2(n, 0);
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(i < x){
                sum += nums[i];
                dp1[i] = sum;
            }
            else{
                sum += nums[i] - nums[i - x];
                dp1[i] = max(dp1[i - 1], sum);
            }
        }
        sum = 0;
        for(int i = n - 1; i >= 0; i--){
            if(i >= n - y){
                sum += nums[i];
                dp2[i] = sum;
            }
            else{
                sum += nums[i] - nums[i + y];
                dp2[i] = max(dp2[i + 1], sum);
            }
        }
        int ans= INT_MIN;
        for(int i = x - 1; i < n - y; i++){
            ans = max(ans, dp1[i] + dp2[i + 1]);
        }
        return ans;
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int x, int y) {   
        int n = nums.size();
        int max1 = helper(nums, x, y);
        int max2 = helper(nums, y, x);
        return max(max1, max2);
    }
};