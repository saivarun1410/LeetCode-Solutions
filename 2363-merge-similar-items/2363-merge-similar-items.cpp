class Solution
{
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2){
        vector<vector<int>>ans;
        map<int,int>m;
        for(int i=0;i<items1.size();i++){
            m[items1[i][0]]=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            m[items2[i][0]]+=items2[i][1];
        }
        for(auto x:m)
        {
            vector<int>temp;
            temp.push_back(x.first);
            temp.push_back(x.second);
            ans.push_back(temp);
        }
        return ans;
    }
};