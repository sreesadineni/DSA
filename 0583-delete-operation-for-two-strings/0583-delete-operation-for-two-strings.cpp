class Solution {
public:
    int dp[501][501];
    int LCS(string s1,string s2,int n,int m){
        for(int i=0 ;i<n+1; i++){
            for(int j=0 ;j<m+1;j++){
                if(i==0 || j==0) dp[i][j]=0;
                else if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                 }
                 else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                 }
            }
         }   
       return dp[n][m];
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        int n=word1.length(),m=word2.length();
        return abs(2*LCS(word1,word2,n,m)-(n+m));
    }
};