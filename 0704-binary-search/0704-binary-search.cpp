class Solution {
public:
    int search(vector<int>&a, int target) {
        int n=a.size();
        int l=0,r=n-1,mid=0;
        while(r>=l){
            mid=l+(r-l)/2;
            if(a[mid]==target) return mid;
            else if(a[mid]>target) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};