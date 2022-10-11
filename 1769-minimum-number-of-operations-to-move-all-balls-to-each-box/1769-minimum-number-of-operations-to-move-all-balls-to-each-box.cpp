class Solution {
public:
    vector<int> minOperations(string boxes) {
        int l=boxes.size();
        vector<int>ans;
        for(int i=0;i<l;i++){
            int count=0;
            for(int j=0;j<l;j++){
                if(i!=j&&boxes[j]=='1'){
                    count+=abs(i-j);
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};