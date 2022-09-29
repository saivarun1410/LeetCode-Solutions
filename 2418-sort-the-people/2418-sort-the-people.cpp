class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        for(int i=0;i<heights.size();i++){
            v.push_back(make_pair(heights[i],names[i]));
        }
        sort(v.begin(),v.end());
        vector<string>s;
        for(int i=names.size()-1;i>=0;i--){
            s.push_back(v[i].second);
        }
        return s;
    }
};