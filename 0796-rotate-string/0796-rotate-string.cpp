class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()==goal.size()){
            string ans=s+s;
            if(ans.find(goal)!=-1) return true;
        }
        return false;
    }
};