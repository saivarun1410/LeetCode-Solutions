class Solution {
public:
    int numberOfSubstrings(string s) {
        int start=0,end=0,n=s.size(),cnt=0,ans=0;
        unordered_map<char,int>map={{'a',0},{'b',0},{'c',0}};
        while (end < s.length()) {
            map[s[end++]]++;
                while(start<s.length()&&map['a']>=1&&map['b']>=1&&map['c']>=1) {
                    map[s[start++]]--;
                    cnt++;
                }
            ans += cnt;
        }
        return ans;
    }
};


