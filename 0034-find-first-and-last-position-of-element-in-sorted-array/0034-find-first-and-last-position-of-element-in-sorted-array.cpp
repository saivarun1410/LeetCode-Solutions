class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>arr=nums;
    int n=nums.size();
    int x=target;
    int low=0,high=n-1;
    vector<int>v({-1,-1});
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            v[0]=mid;
            high=mid-1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            v[1]=mid;
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return v;
    }
};