class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int dp[n+1],dp1[n+1];
        dp[0]=0;dp1[0]=0;
        dp[1]=nums[0];dp1[1]=0;
        if(n==2){
            return max(nums[0],nums[1]);
        }
        for(int i=1 ;i<n ;i++){
             dp[i+1] = max(dp[i],nums[i]+dp[i-1]);
             dp1[i+1]=max(nums[i]+dp1[i-1],dp1[i]);
        }
        return max(dp[n-1],dp1[n]);
    }
};