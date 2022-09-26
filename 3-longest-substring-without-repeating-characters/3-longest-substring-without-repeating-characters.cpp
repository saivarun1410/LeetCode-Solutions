class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1);
        int l=s.size();
        int len=0;
        int left=0;
        int right=0;
        while(right<l){
            if(v[s[right]]!=-1){
                left=max(left,v[s[right]]+1);
            }
            v[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};