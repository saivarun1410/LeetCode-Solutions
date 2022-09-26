class Solution {
public:
   int gcd(int a, int b){
    return b==0?a:gcd(b, a % b);   
    }
    int smallestEvenMultiple(int n) {
        int g=gcd(n,2);
        int l=(n*2)/g;
        return l;
    }
};