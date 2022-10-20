class Solution {
public:
    string removeDigit(string number, char digit) {
        int l=number.size();
        string res="";
        for(int i=0;i<l;i++){
            if(number[i]==digit){
                string ans=number.substr(0,i)+number.substr(i+1);
                res=max(res,ans);
            }
        }
        return res;
    }
};