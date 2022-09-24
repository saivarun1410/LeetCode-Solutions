class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        long long power=n;
        if(n<0) power*=-1;
        while(power){
            if(power%2==0){
                 x*=x;
                 power/=2;
            }
            else{
                res=res*x;
                power=power-1;
            }
        }
        if(n<0) res=1.0/res;
        return res;
    }
};
