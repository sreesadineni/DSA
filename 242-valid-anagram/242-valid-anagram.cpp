class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
     //    map<char,int>mp,mp1;
     //    for(int i=0;i<s.length();i++){
     //        mp[s[i]]++;mp1[t[i]]++;
     //    }
     // if(mp==mp1)  return true;
        vector<int>v(26);
        for(int i=0 ;i< s.length() ; i++){
            v[s[i]-'a']++;
        }
        for(int i=0 ;i< t.length() ; i++){
            v[t[i]-'a']--;
        }
    for(auto x: v){
        if(x) return false;
    }
        return true;
    }
};