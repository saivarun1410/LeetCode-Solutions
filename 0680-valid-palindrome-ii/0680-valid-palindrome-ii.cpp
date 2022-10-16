class Solution {
public:
    bool ispalin(int low, int high, string s){
        while(low<=high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            if(s[low]!=s[high]){
                return ispalin(low,high-1,s)||ispalin(low+1,high,s);
            }
            low++;
            high--;
        }
        return true;
    }
};