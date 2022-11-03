class Solution {
public:
    int maxVowels(string s, int k) {
        int begin=0,end=0,maxi=0,count=0,n=s.size(),windowsize=0;
        while(end<n){
            if(s[end]=='a'||s[end]=='e'||s[end]=='i'||s[end]=='o'||s[end]=='u'){
                count++;
            }
            windowsize++;
            if(windowsize==k){
                maxi=max(maxi,count);
                if(s[begin]=='a'||s[begin]=='e'||s[begin]=='i'||s[begin]=='o'||s[begin]=='u'){
                    count--;
                }
                begin++;
                windowsize--;
            }
            end++;
        }
        return maxi;
    }
};