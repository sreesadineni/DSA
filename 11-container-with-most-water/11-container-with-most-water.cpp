class Solution {
public:
    int maxArea(vector<int>& a) {
        int n=a.size();
        int area=0;
        int i=0,j=n-1;
        while(i<j){
            area=max((j-i)*min(a[i],a[j]),area);
            if(a[i]< a[j]) i++;
            else j--;
        }
        // for(int i=0 ; i<n ; i++){
        //     for(int j=n-1 ; j>0 ; j--){
        //        int  area=(j-i)*min(a[j],a[i]);
        //         res=max(res,area);
        //     }
        // }
        return area;
    }
};