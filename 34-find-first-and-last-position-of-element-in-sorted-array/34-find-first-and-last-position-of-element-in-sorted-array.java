class Solution {
//     public int bin(int[] nums,int target,int l,int r){
       
//         int l1=0,int r1=nums.length-1;
//     }
    public int[] searchRange(int[] nums, int target) {
        int[] res=new int[2];
         int l=0,r=nums.length-1;
          int first=-1,last=-1;
        while(r>=l){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                 first=mid;
                 r=mid-1;
            }
            if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
    l=0;r=nums.length-1;
        while(l<=r){
            int mid=l+(r-l)/2;
           if(nums[mid]==target){
                last=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
            res[0]=first;res[1]=last; 
        return res;
}
}