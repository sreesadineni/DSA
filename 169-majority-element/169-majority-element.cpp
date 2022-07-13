class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();int maxi=INT_MIN;int res;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxi) {
                maxi=mp[nums[i]];
                res=nums[i];
                }
        }
        
        return res;
    }
};