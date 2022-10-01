class Solution {
public:
    int numDecodings(string s) {
       int p = 1, pp, n = s.size();
        for(int i=n-1;i>=0;i--) {
            int cur = s[i]=='0' ? 0 : p;
            if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) cur+=pp;
            pp = p;
            p = cur;
        }
        if(s.empty())
            return 0 ;
        else return p;   
        
    }
};