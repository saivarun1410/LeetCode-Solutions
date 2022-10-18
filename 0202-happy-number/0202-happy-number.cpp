class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7) return true;
        if(n<10) return false;
        int newnum=0;
        while(n!=0){
            newnum+=pow(n%10,2);
            n/=10;
        }
        return isHappy(newnum);
    }
};