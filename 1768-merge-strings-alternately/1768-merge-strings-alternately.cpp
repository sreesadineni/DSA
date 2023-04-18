class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     int n=word1.length(),m=word2.length();
        string res;
        if(n>m){
            for(int i=0 ; i< m ;i++){
                res+=word1[i];
                res+=word2[i];
            }
            for(int i=m;i<n ;i++){
                res+=word1[i];
            }
        }
        else if(m>n){
             for(int i=0 ; i< n ;i++){
                res+=word1[i];
                res+=word2[i];
            }
            for(int i=n;i<m ;i++){
                res+=word2[i];
            }
        }
        else{
             for(int i=0 ; i< m ;i++){
                res+=word1[i];
                res+=word2[i];
            }
        }
        return res;
    }
};