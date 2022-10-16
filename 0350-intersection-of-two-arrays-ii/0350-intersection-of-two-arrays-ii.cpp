class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        map<int,int>n;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            m[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            n[nums2[i]]++;
        }
        vector<int>v;
        for(auto i=m.begin();i!=m.end();i++){
            for(auto j=n.begin();j!=n.end();j++){
                if(i->first==j->first){
                    int mini=min(i->second,j->second);
                    for(int k=1;k<=mini;k++){
                        v.push_back(i->first);
                    }
                }
            }
        }
        return v;
    }
};