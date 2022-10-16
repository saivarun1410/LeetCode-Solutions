class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int m=queries.size();
        int n=points.size();
        int count=0,j=0,i=0;
        vector<int>v;
        while(m!=0){
            for(int k=0;k<n;k++){
                if(((queries[i][0]-points[k][0])*(queries[i][0]-points[k][0])+(queries[i][1]-points[k][1])*(queries[i][1]-points[k][1]))<=queries[i][2]*queries[i][2]){
                    count++;
                }
            }
            v.push_back(count);
            i++;
            count=0;
            m--;
        }
        return v;        
    }
};