class Solution {
public:
    vector<int> nsir(vector<int>& h,int n){
        stack<int> st;
        vector<int>v(n,n);
        for(int i=0 ; i<n ; i++){
            while(!st.empty() && h[i]<h[st.top()]){
                v[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
      vector<int> nsil(vector<int>& h,int n){
        stack<int> st;
        vector<int>v(n,-1);
        for(int i=n-1 ; i>=0 ; i--){
            while(!st.empty() && h[i]<h[st.top()]){
                v[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
    int largestRectangleArea(vector<int>& heights) {
       //Approach -1
        // int maxA=0;
        // for(int i=0; i<heights.size(); i++){
        //     int h=heights[i];
        //     int w=1;
        //     int j=i-1;
        //     while(j>=0 && heights[j]>=h){
        //         j--;
        //         w++;
        //     }
        //      j=i+1;
        //     while(j<heights.size() && heights[j]>=h){
        //         j++;
        //         w++;
        //     }
        //     int area=w*h;
        //     maxA=max(maxA,area);
        // }
        // return maxA;
        //Approach 2
        int n=heights.size();
        vector<int> v1=nsir(heights,n);
        vector<int> v2=nsil(heights,n);
        //for(auto x: v1) cout<<x<<" ";  for(auto x: v2) cout<<x<<" ";
        int maxA=-1;
        for(int i=0 ; i<n ; i++){
            int area=(v1[i]-v2[i]-1)*heights[i];
            maxA=max(area,maxA);
        }
        return maxA;
    }
};