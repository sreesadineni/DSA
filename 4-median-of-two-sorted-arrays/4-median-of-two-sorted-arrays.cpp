class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size();
        int m=nums2.size();
     int ai=0,bi=0;
        vector<int>vec;
        while(ai<n && bi<m){
            if(nums1[ai] < nums2[bi]){
                vec.push_back(nums1[ai]);

                ai++;
            }
            else{
                vec.push_back(nums2[bi]);;
                bi++;
            }
        }
        if(ai<n){
              while(ai<n){
            vec.push_back(nums1[ai]);
            ai++;
            }
        }
        else{
            while(bi<m){
             vec.push_back(nums2[bi]);
             bi++;
            }
        }
        // for(int i=0;i<vec.size();i++){
        //      cout<<vec[i]<<" ";
        // }
        if((n+m)==1) return (double)vec[0];
        if((n+m)%2==0) {
            cout<<vec[(n+m)/2]<<" "<< vec[(n+m)/2-1];
            return (float)(vec[(n+m)/2]+vec[(n+m)/2-1])/2;
        }
        return vec[(n+m)/2];
        //return 0.0;
    }
};