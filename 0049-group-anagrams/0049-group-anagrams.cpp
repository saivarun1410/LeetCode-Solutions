class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<string,vector<string>>m;
        for(int i=0;i<n;i++){
            string res=strs[i];
            sort(res.begin(),res.end());
            m[res].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto i=m.begin();i!=m.end();i++){
            ans.push_back(i->second);
        }
        return ans;
    }
};