//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int dp[1001][1001];
//   top down(memoization)
    int LCS1(string s1,string s2,int n,int m){
        if(n==0 || m==0) return 0;
        if(dp[n-1][m-1]!=-1){
            return dp[n-1][m-1];
        }
        else if(s1[n-1]==s2[m-1]) {
            return dp[n-1][m-1]=1+LCS1(s1,s2,n-1,m-1);
        }
        else {
            return dp[n-1][m-1]=max(LCS1(s1,s2,n,m-1),LCS1(s1,s2,n-1,m));
        }
    }
//   top down (Tabulation)
   int LCS(string s1,string s2,int n){
       int dp[n+1][n+1];
    for(int i=0 ;i<n+1 ;i++){
        for(int j=0 ; j<n+1; j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(s1[i-1]==s2[j-1]){
              dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }   
return dp[n][n];
}
    int longestPalinSubseq(string A) {
        string B=A;
        int n=A.length();
        reverse(A.begin(),A.end());
        // memset(dp,-1,sizeof(dp));
        // cout<<LCS1(A,B,n,n);
        return LCS(A,B,n);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends