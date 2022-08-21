class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m=*max_element(piles.begin(),piles.end());
        int l=1,r=m;
        int ans=m;
        while(l<=r){
            int mid=(l+r)/2;
           long hours=0;
           for(int i=0 ; i<piles.size() ; i++){
            if(piles[i] % mid == 0){
              hours += piles[i]/mid;
            }
            else hours += piles[i]/mid + 1;
          }
            if(hours>h){
                l=mid+1;
            }
            else{
                r=mid-1;
                ans=min(ans,mid);
            }
        }
      return ans;
    }
};