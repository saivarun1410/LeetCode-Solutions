class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        map<char,int>p;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            p[t[i]]++;
        }
        if(m==p){
            return true;
        }
        return false;
    }
};