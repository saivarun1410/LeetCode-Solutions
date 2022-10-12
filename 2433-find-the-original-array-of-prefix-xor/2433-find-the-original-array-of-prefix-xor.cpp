class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int>ans;
        ans.push_back(pref[0]);
        for(int i=1;i<n;i++){
            if(pref[i]==0){
                ans.push_back(pref[i-1]);
            }
            else{
                ans.push_back(pref[i]^pref[i-1]);
            }
        }
        return ans;
    }
};