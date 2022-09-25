class Solution {
public:
    string sortSentence(string s) {
        int l=s.size();
        map<int,string>m;
        string ans="";
        for(int i=0;i<l;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                ans+=s[i];
            }
            if(s[i]>='1'&&s[i]<='9'){
                m[s[i]]=ans;
                ans="";
            }
        }
        string res="";
        for(auto it:m){
            res+=it.second;
            res+=' ';
        }
        string res2="";
        for(auto i=0;i<res.size()-1;i++){
            res2+=res[i];
        }
        return res2;
    }
};

