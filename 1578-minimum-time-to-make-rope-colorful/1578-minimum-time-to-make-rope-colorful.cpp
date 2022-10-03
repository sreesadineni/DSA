class Solution {
public:
    int minCost(string s, vector<int>& t) {
      int min_time=0; 
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) {
                 min_time=min_time+min(t[i],t[i+1]);   
                 t[i+1]=max(t[i],t[i+1]);       
                }
       }
        return min_time;
    }
};