class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        char a=s[0],b=s[1],c=s[2];
        if(a!=b&&b!=c&&c!=a)count++;
        for(int i=3;i<s.size();i++){
            a=b;
            b=c;
            c=s[i];
            if(a!=b&&b!=c&&c!=a)count++;
        }
        return count;
    }
};