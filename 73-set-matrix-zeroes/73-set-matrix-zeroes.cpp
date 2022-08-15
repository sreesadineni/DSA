class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int n=matrix.size();
        int m=matrix[0].size();
        vector<int>vec(n),vec1(m);
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ;j++){
                if(matrix[i][j]==0){
                    vec[i]=-1;vec1[j]=-1;
                } 
            }
        }
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ;j++){
                if(vec[i]==-1 || vec1[j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};