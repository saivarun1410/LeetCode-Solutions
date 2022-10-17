class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        int count=0,count1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                if(count>0){
                    count--;
                }
                else{
                    s[i]='*';
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                count1++;
            }
            if(s[i]=='('){
                if(count1>0){
                    count1--;
                }
                else{
                    s[i]='*';
                }
            }
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                ans+=s[i];
            }
        }
        return ans;
    }
};