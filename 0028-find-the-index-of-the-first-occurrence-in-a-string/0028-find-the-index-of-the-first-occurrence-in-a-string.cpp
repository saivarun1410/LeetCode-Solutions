class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int k=needle.size();
        for(int i=0;i<n;i++){
            if(needle==haystack.substr(i,k)){
                return i;
            }
        }
        return -1;
    }
};