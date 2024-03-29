/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
//     binary search to find peak Element in an array
    int findPeak(MountainArray &mountainArr,int n){
        int l=1,r=n-2;
        int mid=0,midEle=0,prev=0,next=0;
        while(l<=r){
             mid=l+(r-l)/2;
             midEle=mountainArr.get(mid);
             prev=mountainArr.get(mid-1); 
             next=mountainArr.get(mid+1);
            if(midEle>prev && midEle>next){
                return mid;
            }
            else if(midEle > prev && midEle < next ){
                l=mid+1;
            }
            else if(midEle <prev && midEle >next ){
                r=mid-1;
            }
        }
        return -1;
    }
//     binary search to find target element in the array
    int findTarget(int l,int r,MountainArray &mountainArr,int tar,bool b){
        int mid=0,midEle=0;
        while(l<=r){
            mid=(l+r)/2;
            midEle=mountainArr.get(mid);
            if(midEle==tar){
                return mid;
            }
            if(b){
                if(midEle> tar){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(midEle> tar){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
// time completixity of binary search-> log(n)
// performed binary search 3 times to find peak element, find target in left sidde of peak if not present then right side of the peak element (if necessary) 
// time complexity in best case is log(n)(if peak element is target)
// time complexity in worst case is 3log(n) (if target element is present in right side of peak)
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int mid=findPeak(mountainArr,n);
        if(mountainArr.get(mid)==target) return mid;
        if(findTarget(0,mid-1,mountainArr,target,1)!=-1){
            return findTarget(0,mid-1,mountainArr,target,1);
        }
        return findTarget(mid,n-1,mountainArr,target,0);
    }
};