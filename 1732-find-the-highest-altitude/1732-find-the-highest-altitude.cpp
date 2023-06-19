class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size(),maxi=INT_MIN,sum=0;
        for(int i=0 ;i<n ;i++){
             sum+=gain[i];
             maxi=max(sum,maxi);
        }
        if(maxi<0) maxi=0;
        return maxi;
    }
};