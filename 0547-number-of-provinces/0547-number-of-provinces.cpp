class Solution {
public:
    
    void dfs(int v,map<int,vector<int>>&mp, int vis[]){
        vis[v]=1;
        for(auto x:mp[v]){
            if(!vis[x]){
                dfs(x,mp,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        map<int,vector<int>>mp;
        int n= isConnected.size();
        for(int i=0 ; i<n ;i++){
            for(int j=0 ;j<n ;j++){
                if(isConnected[i][j]==1 && i!=j){
                     mp[i].push_back(j);
                }
            }
        }
        for(auto x:mp){
            cout<<x.first<<" ";
            for(auto c:x.second){
                cout<<c<<"  ";
            }
        }
        int vis[201]={0};
        int cnt=0;
        for(int i=0 ; i<n ;i++){
            if(!vis[i]){
                 dfs(i,mp,vis);
                cnt++;
            }
        }
        return cnt;
    }
};