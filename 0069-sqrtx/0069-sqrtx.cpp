class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid<=x/mid){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};