class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n = str.length();
    int mxLength = 0, ws=0, we=0;
    map<char, int> mp;
    for(we=0; we<n; we++){
        char ch = str[we]; // we include end char
        mp[ch]++;
        if(mp[ch] > 1){ // bad window
            while(ws <= we){
                char rm = str[ws]; // we remove start char
                mp[rm]--;
                ws++;
                if(mp[rm] == 1) break;
            }
        } else { // good window
            mxLength = max(mxLength, we-ws+1);          
        }
    }
    return mxLength;
  }
};