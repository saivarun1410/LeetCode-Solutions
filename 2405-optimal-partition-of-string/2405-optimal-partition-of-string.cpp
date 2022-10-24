class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;
        int l=s.size(),count=1;
        for(int i=0;i<l;i++){
            if(st.find(s[i])!=st.end()){
                count++;
                st.clear();
                st.insert(s[i]);
            }
            else{
                st.insert(s[i]);
            }
        }
        return count;
    }
};