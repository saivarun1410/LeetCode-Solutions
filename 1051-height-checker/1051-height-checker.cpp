class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int l=heights.size();
        vector<int>v;
        for(int i=0;i<l;i++){
            v.push_back(heights[i]);
            //cout<<v[i]<<" ";
        }
        sort(heights.begin(),heights.end());
        int count=0;
        for(int i=0;i<l;i++){
            if(heights[i]!=v[i]) count++;
            //cout<<heights[i]<<" ";
        }
        return count;
    }
};