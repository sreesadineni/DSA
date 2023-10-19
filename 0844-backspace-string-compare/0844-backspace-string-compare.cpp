class Solution {
public:
    string result(string s){
        stack<char>st;
        string s1=" ";
        for(int i=0 ;i<s.length();i++){
            if(s[i]=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
         while(!st.empty()){
             s1+=st.top();
             st.pop();
         }
        return s1;
    }
    bool backspaceCompare(string s, string t) {
        return (result(s) == result(t));
    }
};