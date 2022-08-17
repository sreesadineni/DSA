class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string> mp;
       string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0; i< 26; i++){
            mp['a'+i]=morse[i];
        }
        set<string> s;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            string ans;
            for(int j=0; j<str.length(); j++){
                ans+=mp[str[j]];
            }
           s.insert(ans);
        }
        return s.size();
    }
};