class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return mid;
    }
};