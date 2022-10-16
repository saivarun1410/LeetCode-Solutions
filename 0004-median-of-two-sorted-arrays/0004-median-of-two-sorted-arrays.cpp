class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>v;
        for(int i=0;i<m;i++){
            v.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int mid=(m+n)/2;
        if((m+n)%2!=0){
            return v[mid];
        }
        else{
            double ans=(v[mid]+v[mid-1])/2.00000;
            return ans;
        }
    }
};