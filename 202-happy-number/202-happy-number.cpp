class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7) return true;
        if(n/10==0) return false;
        int sum=0;
        for(int i=n;i>0;i=i/10){
            sum+=pow(i%10,2);
        }
        return isHappy(sum);
    }
};