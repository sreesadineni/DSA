class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       map<int, priority_queue<int,vector<int>,greater<int>>> mp;//min priority queue
        int m = mat.size();
        int n = mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i-j].push(mat[i][j]);   //diagonal elements have same (i-j) value
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat[i][j] = mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return mat;
       
    }
};