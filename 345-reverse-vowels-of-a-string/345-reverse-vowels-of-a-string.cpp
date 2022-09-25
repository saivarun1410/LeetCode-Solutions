class Solution {
public:
    string reverseVowels(string s) {
        int l=s.size();
        vector<char>v;
        for(int i=0;i<l;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                v.push_back(s[i]);
            }
        }
        int j=0;
        int len=v.size();
        for(int i=l-1;i>=0;i--){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                if(j==len) break;
                s[i]=v[j];
                j++;
            }
        }
        return s;
    }
};