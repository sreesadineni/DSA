class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        unordered_map<int,int>mp;
        int maxi=INT_MIN,res=0;
        for(int i=0 ;i<n ;i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        for(auto x:mp){
            if(maxi<x.second){
                maxi=x.second;
                res=x.first;
            }
        }
        return res;
    }
};