//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    bool detect(int i,vector<int> adj[],int vis[],int dfvis[]){
        vis[i]=1;
        dfvis[i]=1;
        for(auto x: adj[i]){
            if(!vis[x]){
                if(detect(x,adj,vis,dfvis)) return true;
            }
                else if(dfvis[x]) return true;
            }
        dfvis[i]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V] ,dfvis[V];
        memset(vis,0,sizeof vis);
        memset(dfvis,0,sizeof dfvis);
        for(int i = 0 ; i<V ;i++) {
            if(!vis[i]) {
                if(detect(i, adj, vis,dfvis)) return true; 
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends