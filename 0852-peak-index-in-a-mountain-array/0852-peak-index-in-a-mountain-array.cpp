class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                cout<<mid<<endl;
                return mid;
            }
            else if(arr[mid]<arr[mid+1]){
                cout<<low<<endl;
                low=mid+1;
            }
            else{
                cout<<high<<endl;
                high=mid;
            }
        }
        return low;
    }
};