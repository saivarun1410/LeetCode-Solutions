class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    bool flag=true;
                    for(int k=j+1;k<n;k++){
                        if(nums2[k]>nums2[j]){
                            v.push_back(nums2[k]);
                            flag=false;
                            break;
                        }
                    }
                    if(flag==true){
                        v.push_back(-1);
                    }
                }
            }
        }
        return v;
    }
};