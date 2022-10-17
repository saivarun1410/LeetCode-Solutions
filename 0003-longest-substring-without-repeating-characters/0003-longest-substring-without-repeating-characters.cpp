class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),start=0,end=0,maxi=0;
        map<int,int>m;
        while(end<n){
            m[s[end]]++;
            while(m[s[end]]!=1){
                m[s[start]]--;
                start++;
            }
            maxi=max(maxi,end-start+1);
            end++;
        }
        return maxi;
    }
};
