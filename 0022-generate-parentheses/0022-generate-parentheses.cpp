class Solution {
public:
    vector<string>v;
    void f(string s, int left, int right){
        if(left==0&&right==0){
            v.push_back(s);
            return ;
        }
        if(left>0){
            f(s+"(",left-1,right);
        }
        if(right>left){
            f(s+")",left,right-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        f("",n,n);
        return v;
    }
};