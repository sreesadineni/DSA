class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        // int count=0;
        // for(int i =0 ; i<n ;i++){
        //     if(nums[i]!=0){
        //     product*=nums[i];
        //     }
        //     else{
        //         count++;
        //     }
        // }
        // for(int i=0 ; i<n ; i++){
        //     if(nums[i]!=0 && count==0){
        //     vec[i]=product/nums[i];
        //     }
        //     else if(nums[i]==0 && count<=1){
        //         vec[i]=product;
        //     }
        //     else{
        //         vec[i]=0;
        //     }
        // }
        // return vec;
   //approach-2 
    res[0] = 1;
    for (int i = 1; i < n; i++) {
        res[i] = res[i - 1] * nums[i - 1];
    }
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        res[i] *= right;
        right *= nums[i];
    }
    return res;
    }
};