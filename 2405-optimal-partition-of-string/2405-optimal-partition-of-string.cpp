class Solution {
public:
    int partitionString(string s) {
        set<char>se;
        int res=1;
        for(auto i:s){
            if(se.find(i)!=se.end()){
                res++;
                se.clear();
            }
            se.insert(i);
        }
        return res;
    }
};