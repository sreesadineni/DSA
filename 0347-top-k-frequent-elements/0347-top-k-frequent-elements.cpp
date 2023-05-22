class Solution {
public:
     static bool cmp(pair<int,int>& a,pair<int,int>& b)
   {
    return a.second > b.second;
   }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        int maxi=INT_MIN;
        vector<pair<int,int>>vec;
        vector<int>vec1;
        int n=nums.size();
        for(int i=0;i<n;++i){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end(),cmp);
        for(auto v:vec){
            vec1.push_back(v.first);
            k--;
            if(k==0) break;
        }
        return vec1;
    }
};