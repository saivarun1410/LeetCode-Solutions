class Solution {
public:
    string reverseWords(string s) {
    string A=s;
    stack<string>st;
    int n=A.size();
    string temp=A;
    temp+=' ';
    string ans="";
    for(int i=0;i<=n;i++){
        if(temp[i]>=65&&temp[i]<=90||temp[i]>=97&&temp[i]<=122||temp[i]>=48&&temp[i]<=57){
            ans+=temp[i];
        }
        if(temp[i]==' '&&ans!=""){
            st.push(ans);
            ans="";
        }
    }
    string res="";
    while(!st.empty()){
        res+=st.top();
        st.pop();
        if(st.empty()) break;
        res+=' ';
    }
    return res;
    }
};