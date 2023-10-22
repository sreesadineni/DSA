class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(int i=0 ;i<n ;i++){
            mp[nums[i]]++;           
        }
        for(auto x:mp){
            if( n/3 < x.second ){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};