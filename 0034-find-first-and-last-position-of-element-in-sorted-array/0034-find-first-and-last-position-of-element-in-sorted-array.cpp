class Solution {
public:
    int BinarySearch(vector<int>& nums, int target,bool f){
        int ind=-1,l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid] == target) {
                ind=mid;
                if(f){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else if(nums[mid] > target) r=mid-1;
            else if(nums[mid] < target) l=mid+1;
        }
        return ind;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int n=BinarySearch(nums,target,true);
        if(n==-1){
            return {-1,-1};
        } 
        int i=BinarySearch(nums,target,false);
        return {n,i};
    }
};