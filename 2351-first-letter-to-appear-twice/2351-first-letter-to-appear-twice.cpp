class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>v(26,0);
        for(auto i:s){
            cout<<i-'a'<<endl;
            v[i-'a']++;
            if(v[i-'a']==2)
                return i;
        }
        return ' ';
        //Approach -2
        // map<char,int>mp;
        // for(int i=0; i<s.length(); i++){
        //     mp[s[i]]++;
        //     if(mp[s[i]]==2) return s[i];
        // }
        // return -1;
    }
};