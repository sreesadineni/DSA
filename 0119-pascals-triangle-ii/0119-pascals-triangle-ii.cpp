class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1 , 1});

        for (int i = 2; i <=rowIndex; i++) {
                     vector<int> myAns;
            for (int j = 0; j <= i; j++) {
                if (j > 0 and j < i) 
                    myAns.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
                else
                    myAns.push_back(1);
            }
            ans.push_back(myAns);
        }
        
        
        return ans[rowIndex];
    }
};