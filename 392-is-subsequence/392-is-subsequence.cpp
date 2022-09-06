class Solution {
public:
    bool sub(string s, string t ,int m, int n){
        if(m==0) return true;
        if(n==0) return false;
        if(s[m-1]==t[n-1]) return sub(s,t,m-1,n-1);
        return sub(s,t,m,n-1);
    }
    bool isSubsequence(string s, string t) {
        if(sub(s,t,s.size(),t.size())) return true;
        return false;
    }
};