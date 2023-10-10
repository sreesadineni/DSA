class Solution {
public:
    int minOperations(vector<int>& nums) {
        int l=nums.size();
        int res=l,r=0;
        set<int>s;
        for(auto x:nums){
            s.insert(x);
        }
        nums.clear();
        for(auto x:s){
            nums.push_back(x);
        }
         for(int i=0 ;i<nums.size(); i++){
            while(r< nums.size() && nums[r]<(nums[i]+l)){
                r+=1;
            }
             int window=r-i;
             res=min(res,l-window);
        }
        return res;
    }
};