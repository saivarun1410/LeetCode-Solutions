class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++){
            string p=to_string(i);
            s+=p;
        }
        int count=0;
        string ans="";
        do{
            count++;
            if(count==k) {
                ans=s;
                cout<<s;
            }
        }
        while(next_permutation(s.begin(),s.end()));
        return ans;
    }
};