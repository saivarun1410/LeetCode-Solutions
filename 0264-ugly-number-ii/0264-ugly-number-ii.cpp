class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>v;
        v.push_back(1);
        int ind2=0,ind3=0,ind5=0;
        for(int i=1;i<n;i++){
            v.push_back(min(2*v[ind2],min(3*v[ind3],5*v[ind5])));
            if(v[i]==2*v[ind2]) ind2++;
            if(v[i]==3*v[ind3]) ind3++;
            if(v[i]==5*v[ind5]) ind5++;
        }
        return v.back();
    }
};