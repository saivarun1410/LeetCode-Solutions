class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        int l=sentence.size();
        for(int i=0;i<l;i++){
            s.insert(sentence[i]);
        }
        if(s.size()==26) return true;
        return false;
    }
};