class Solution {
public:
    int f(int ind, string s,int n){
        if(n<=0) return 1;
        if(ind>=s.size()){
            return 0;
        }
        int notPick=f(ind+1,s,n);
        int Pick=f(ind,s,n-1);
        return notPick+Pick;
    }
    int countVowelStrings(int n) {
        string s="aeiou";
        if(n==1) return 5;
        return f(0,s,n);
    }
};
