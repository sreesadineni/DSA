class Solution {
public:
    int dirx[4]={-1,1,0,0};
    int diry[4]={0,0,1,-1};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int tar=image[sr][sc];
        image[sr][sc]=color;
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            vis[r][c]=1;
            for(int i=0 ; i<4; i++){
                int nr=r+dirx[i],nc=c+diry[i];
                if(nc>=0 && nr>=0 && nr<n && nc<m && image[nr][nc]==tar && !vis[nr][nc])                          {
                    image[nr][nc]=color;
                    q.push({nr,nc});
                } 
            }
        }
        return image;
    }
};