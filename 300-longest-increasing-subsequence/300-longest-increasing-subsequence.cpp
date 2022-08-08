class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
         int a[nums.size()];int k=0;
        a[k]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<a[k]){
                int l=0,u=k;
                while(l<=u){
                    int mid=(l+u)/2;
                    if(a[mid]<nums[i])
                        l=mid+1;
                    else
                        u=mid-1;
                }
                a[l]=nums[i];
            }
            else if(a[k]!=nums[i]){
                k++;
                a[k]=nums[i];
            } 
        }
        return k+1;
    }
};