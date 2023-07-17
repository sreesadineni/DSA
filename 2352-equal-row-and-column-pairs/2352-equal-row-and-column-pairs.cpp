class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<int,vector<int>>mp,mp1;
        int n=grid.size();
        for(int i=0; i<n ;i++){
            for(int j=0;j<n;j++){
                 mp[i].push_back(grid[i][j]); 
                 mp1[j].push_back(grid[i][j]); 
            }
           
        }
        int ans=0;
        for(auto x:mp){
            for(auto x1:mp1){
                if(x.second==x1.second){
                    ans++;
                }
            }
        }
        return ans;
    }
};