class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>res;
        for(int i=0;i<points.size();i++){
            res.push_back(points[i][0]);
        }
        int maxi=0;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++){
            maxi=max(maxi,res[i+1]-res[i]);
        }
        return maxi;
    }
};