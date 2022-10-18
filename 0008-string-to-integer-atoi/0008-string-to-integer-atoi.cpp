class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        bool flag=false;
        while(i<n){
            if(s[i]==' '){
                i++;
            }
            else{
                break;
            }
        }
        if(s[i]=='-'){
            flag=true;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        while(i<n){
            if(s[i]!='0')break;
            else i++;
        }
        string ans="";
        while(i<n){
            if(s[i]>='0'&&s[i]<='9'){
                ans+=s[i];
            }
            else{
                break;
            }
            i++;
        }
        long long res=0;
        int k=0;
        bool ovf=false;
        for(int i=ans.size()-1;i>=0;i--){
            int val=ans[i]-'0';
            res+=val*pow(10,k);
            k++;
            if(k>10||res>INT_MAX){
                ovf =true;
                break;
            }
        }
        if(ovf==true){
            if(flag)return INT_MIN;
            else return INT_MAX;
        }
        if(flag==true) return -res;
        return res;
    }
};
