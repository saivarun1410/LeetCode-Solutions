class Solution {
public:
    int balancedStringSplit(string s) {
        int len=s.size();
        int l=0,r=0;
        int count=0;
        for(int i=0;i<len;i++){
            if(s[i]=='L') l++;
            if(s[i]=='R') r++;
            if(l==r) {
                count++;
                l=0; r=0;
            }
        }
        return count;
    }
};