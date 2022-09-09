class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(),prop.end(),cmp);
        int max = INT_MIN;
        int res=0;
        for(auto p:prop){
            if(max > p[1]) res++;
            else max = p[1];
        }
        return res;
    }
};