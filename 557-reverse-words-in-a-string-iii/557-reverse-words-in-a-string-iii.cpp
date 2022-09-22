class Solution {
public:
    string reverseWords(string s) {
        string str,s1;
        for(int i=0 ; i<s.length() ; i++){
             if(s[i]==' ') {
                 reverse(s1.begin(),s1.end());
                 str+=s1+" ";
                 s1="";
             }
            else s1+=s[i];
        }
        reverse(s1.begin(),s1.end());
        str+=s1;
        return str;
    }
};