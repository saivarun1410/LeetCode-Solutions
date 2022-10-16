class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            m[nums1[i]]++;
        }
        vector<int>v;
        for(int i=0;i<n2;i++){
            if(m[nums2[i]]){
                v.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        return v;
    }
};