class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0,sum=0;
        int l1=a.size()-1,l2=b.size()-1;
        string res="";
        while(l1>=0||l2>=0||carry){
            if(l1>=0){
                carry+=a[l1]-'0';
                l1--;
            }
            if(l2>=0){
                carry+=b[l2]-'0';
                l2--;
            }
            res += (carry%2+'0');
            carry = carry/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
