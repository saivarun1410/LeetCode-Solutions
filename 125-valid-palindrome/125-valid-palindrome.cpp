class Solution {
public:
    bool isPalindrome(string s) {
        int l=s.size();
        for(int i=0;i<l;i++){
            s[i]=tolower(s[i]);
        }
        string s1="";
        string s2="";
        for(int i=0;i<l;i++){
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)){
                s1+=s[i];
            }
        }
         for(int i=l-1;i>=0;i--){
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)){
                s2+=s[i];
            }
        }
        if(s1==s2){
            return true;
        }
        return false;
    }
};