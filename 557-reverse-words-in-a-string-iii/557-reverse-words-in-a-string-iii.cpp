class Solution {
public:
    string reverseWords(string s) {
        int l=s.size();
        string d="";
        string ans="";
        for(int i=0;i<l;i++){
            if(s[i]!=' '){
                d+=s[i];
            }
            else{
                reverse(d.begin(),d.end());
                ans+=d;
                ans+=" ";
                d="";
            }
        }
        reverse(d.begin(),d.end());
        ans+=d;
        return ans;
    }
};