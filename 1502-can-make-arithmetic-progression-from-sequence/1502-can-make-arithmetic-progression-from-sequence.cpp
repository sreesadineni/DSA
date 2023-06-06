class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
     sort(arr.begin(),arr.end());
     int n=arr.size();
     if(n==2) return true;
        int d=arr[0]-arr[1];
     for(int i=1 ; i<n-1 ; ++i){
         if(d!=arr[i]-arr[i+1]) return false;
     }
        return true;
    }
};