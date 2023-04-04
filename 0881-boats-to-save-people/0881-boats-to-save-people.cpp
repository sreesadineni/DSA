class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int n=p.size();
        sort(p.begin(),p.end());
        int ans=0,remain;
        int l=0,r=n-1;
        while(l<=r){
            remain=limit-p[r];
            r--;
            ans++;
            if(l<=r && remain>=p[l]){
                l++;
            }
        }
        return ans;
    }
};