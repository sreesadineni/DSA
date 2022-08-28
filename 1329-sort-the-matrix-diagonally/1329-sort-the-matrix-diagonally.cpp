class Solution {
public:
   vector<int>diagonal(int i,int j,int n, int c,vector<vector<int>>& mat){
        vector<int>v;
        while(i<n && j<c){
            v.push_back(mat[i][j]);
                i++;j++;
        }
        for(auto x:v) cout<<x<<" ";
       sort(v.begin(),v.end());
      
       return v;
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int c=mat[0].size();
        vector<vector<int>> m=mat;
        vector<int>v;
        for(int i=0 ; i<c ; i++){
            int r=0,c1=i;
            v=diagonal(0,i,n,c,mat);
            int  cn=v.size(),j=0;      
            while(r<n && c1<c && j<cn){
                m[r][c1]=v[j];
                r++;c1++;j++;
            }
        }
        for(int i=1 ; i<n-1 ; i++){
             int r=i,c1=0;
            v=diagonal(i,0,n,c,mat);
            int  cn=v.size(),j=0;      
            while(r<n && c1<c && j<cn){
                m[r][c1]=v[j];
                r++;c1++;j++;
            }
        }
        return m;
    }
};