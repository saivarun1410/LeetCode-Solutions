class Solution {
public:
    void f(int i,string &digits,string &ans,unordered_map<char,string>&m,vector<string>&res){
        if(i==digits.size()){
            res.push_back(ans);
            return;
        }
        string s=m[digits[i]];
        for(int j=0;j<s.size();j++){
            ans.push_back(s[j]);
            f(i+1,digits,ans,m,res);
            ans.pop_back();
        }
        //return;
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>m;
        if(digits==""){
            return {};
        }
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string ans="";
        vector<string>res;
        f(0,digits,ans,m,res);
        vector<string>v;
        return res;
    }
};
