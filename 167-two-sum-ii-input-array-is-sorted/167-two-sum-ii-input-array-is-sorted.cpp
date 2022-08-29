class Solution {
public:
    vector<int> twoSum(vector<int>&a, int target) {
        int i=0 ,j=a.size()-1;
        vector<int>v;
        while(i<j){
          //  cout<<i<<" "<<j<<endl;
           // i++;j--;
            if(a[i]+a[j]==target) {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if((a[i]+a[j])<target){
                i++;
            }
            else if((a[i]+a[j]) > target){
                j--;
            }
        }
        return v;
    }
};