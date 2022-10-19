class Solution {
public:
    vector<vector<int>>res;
    void f(int i,int n,vector<int>&v,vector<int>&ans){
        if(i==n){
            res.push_back(ans);
            return;
        }
        ans.push_back(v[i]);
        f(i+1,n,v,ans);
        ans.pop_back();
        f(i+1,n,v,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        vector<vector<int>>fans;
        int size=v.size();
        f(0,size,v,ans);
        for(int i=0;i<res.size();i++){
            if(res[i].size()==k){
                fans.push_back(res[i]);
            }
        }
        return fans;
    }
};