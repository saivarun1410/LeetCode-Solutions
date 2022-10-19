class Solution {
public:
    static bool cmp(pair<string,int>&a,pair<string,int>&b){
        if(a.second==b.second){
            int val=a.first.compare(b.first);
            if(val<0) return a.second;
            else b.second;
        }
        return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            m[words[i]]++;
        }
        vector<pair<string,int>>v;
        for(auto i=m.begin();i!=m.end();i++){
            v.push_back(make_pair(i->first,i->second));
        }
        sort(v.begin(),v.end(),cmp);
        vector<string>res;
        for(auto i=0;i<v.size();i++){
            if(k==0) break;
            res.push_back(v[i].first);
            k--;
        }
        return res;
    }
};