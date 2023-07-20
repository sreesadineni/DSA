class Solution {
public:
    int coinChange(vector<int>& coin, int sum) {
    int n=coin.size();
            int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
      for(int j=0;j<sum+1;j++){
        if(i==0 && j==0) dp[i][j]=INT_MAX-1;
        else if(i==0) dp[i][j]=INT_MAX-1;
        else if(j==0) dp[i][j]=0;
      }
    }
    for(int j=1;j<sum+1;j++){
        if(j%coin[0]==0) {
            dp[1][j]=j/coin[0];
        }
        else{
            dp[1][j]=dp[0][j];
        }
    }
	for(int i=2 ;i<n+1 ;i++){
		for(int j=1 ;j<sum+1 ;j++){
 		        if(coin[i-1]<=j){
				dp[i][j]=min(dp[i-1][j],1+dp[i][j-coin[i-1]]);
			}
			else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
    // print the matrix 
	// for(int i=0 ;i<n+1 ;i++){
	// 	for(int j=0 ;j<sum+1 ;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
    if(dp[n][sum]== 2147483646) return -1;
	return dp[n][sum];
    }
};