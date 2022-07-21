class Solution {
    public void moveZeroes(int[] nums) {
        int n=nums.length;
        int d=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
               // System.out.println(d);
              nums[d++]=nums[i];
              
            }
        }
        for(int i=d; i<n ;i++){
             nums[i]=0;
        }
    }
}