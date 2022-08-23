class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target) {
        //             vec.push_back(i);vec.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return vec;
        
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};