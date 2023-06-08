class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int no=0,c=0;
        for(int i=0 ;i<n ;++i){
            for(int j=m-1; j>=0 ;--j){
                c++;
                if(grid[i][j]<0) no++;
                else break;
            }
        }
        return no;
    }
};