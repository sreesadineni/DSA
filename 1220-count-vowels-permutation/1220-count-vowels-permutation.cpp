class Solution {
public:
    long long mod=1000000007;
    int countVowelPermutation(int n) {
//         using dp bottom up DP to solve it.
//         lets consider number of strings can be formed with length(1 to n) as columns.
//         for n=1 all each character only can form 1 n length string so fill column 1 with 1

           vector<vector<long long>>v(6,vector<long long>(n+1,0));
           for(int i=1;i<=5;i++){
               v[i][1]=1;
           }
//         each charcter represents a following row a:-1 , e:-2, i:-3, o:-4, u:-5
//        fill the reamining table
        for(int i=2;i<=n;i++){
            v[1][i]=(v[2][i-1]+v[3][i-1]+v[5][i-1])%mod;
            v[2][i]=(v[1][i-1]+v[3][i-1])%mod;
            v[3][i]=(v[2][i-1]+v[4][i-1])%mod;
            v[4][i]=(v[3][i-1])%mod;
            v[5][i]=(v[3][i-1]+v[4][i-1])%mod;
        }
//         add  no of strings formed with length n  
        long long ans=v[1][n]+v[2][n]+v[3][n]+v[4][n]+v[5][n];
        return ans%mod;
    }   
};