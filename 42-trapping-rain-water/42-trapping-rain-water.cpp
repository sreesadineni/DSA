class Solution {
public:
    vector<int> NLIR(vector<int>& h){
        vector<int>v(h.size());
        v[0]=h[0];
        for(int i=1 ; i<h.size() ; i++){
            v[i]=max(h[i],v[i-1]);
        }
        return v;
    }
    vector<int> NLIL(vector<int>& h){
        vector<int>v(h.size());
        v[h.size()-1]=h[h.size()-1];
        for(int i=h.size()-2 ; i>=0 ;i--){
           v[i]=max(h[i],v[i+1]);
        }
        return v;
    }
    int trap(vector<int>& h) {
        vector<int>v1,v;
        v1=NLIR(h);v=NLIL(h);
        int ans=0;
         for(int i=0 ;i<h.size();i++){
            ans+=(min(v[i],v1[i])-h[i]);
        }
        return ans;
    }
};