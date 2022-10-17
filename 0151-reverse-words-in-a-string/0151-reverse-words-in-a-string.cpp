class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stack<string>st;
        string ans="";
        string ress=s;
        ress+=' ';
        for(int i=0;i<n+1;i++){
            if(ress[i]!=' '){
                ans+=ress[i];
            }
            if(ress[i]==' '&&ans!=""){
                st.push(ans);
                ans="";
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            res+=' ';
            st.pop();
        }
        int p=0;
        int q=0;
        int m=res.size();
        for(int i=0;i<m;i++){
            if(res[i]>=65&&res[i]<=90||res[i]>=97&&res[i]<=122||res[i]>=48&&res[i]<=57){
                p=i;
                break;
            }
        }
         for(int i=m-1;i>=0;i--){
            if(res[i]>=65&&res[i]<=90||res[i]>=97&&res[i]<=122||res[i]>=48&&res[i]<=57){
                q=i;
                break;
            }
        }
        string fans="";
        for(int i=p;i<=q;i++){
            fans+=res[i];
        }
        return fans;
    }
};