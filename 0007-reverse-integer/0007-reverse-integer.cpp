class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        long limit=pow(2,31);
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            ans+=s[i];
        }
        if(x<0){
            string res="-";
            for(int i=0;i<ans.size()-1;i++){
                res+=ans[i];
            }
            long long n=stol(res);
            if(n>limit-1|| n<-1*limit )return 0;
            return n;
        }
        long long  n=stol(ans);
        if(n>limit-1|| n<-1*limit )return 0;
        return n;
    }
};
