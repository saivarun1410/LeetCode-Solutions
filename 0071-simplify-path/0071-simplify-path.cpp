class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string>st;
        string res="";
        for(int i=0;i<n;i++){
            string temp="";
            if(path[i]=='/'){
                continue;
            }
            while(path[i]!='/'&&i<n){
                temp+=path[i];
                i++;
            }
            if(temp=="."){
                continue;
            }
            else if(temp==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(temp);
            }
        }
        while(!st.empty()){
            res='/'+st.top()+res;
            st.pop();
        }
        if(res.size()==0){
            return "/";
        }
        return res;
    }
};
