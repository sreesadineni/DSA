class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>actual=heights;
        int count=0;
        sort(heights.begin(),heights.end());
        for(int i=0 ;i<heights.size();i++){
            if(heights[i]!=actual[i]){
                count++;
            }
        }
        return count;
    }
};