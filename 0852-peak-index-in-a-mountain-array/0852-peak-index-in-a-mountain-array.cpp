class Solution {
public:
//     binary search to find peak element since a[mid-1]< a[mid] >a[mid+1]
//     time complexity is log(n) (n is no of elements in the array)
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
          int l=1,r=n-2;
        int mid=0,midEle=0,prev=0,next=0;
        while(l<=r){
             mid=l+(r-l)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1] ){
                l=mid+1;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1] ){
                r=mid-1;
            }
        }
        return -1;
    }
};