class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
           int n=nums.size();
        long long sum=0,maxAvg=0;
        for(int i=0;i<n;++i){
            sum+=nums[i];
            long long currAvg=ceil((double)sum/(i+1));
            maxAvg=max(currAvg,maxAvg);
        }
        return maxAvg;
    }
};