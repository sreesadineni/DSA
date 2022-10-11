//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long indexee(vector<long long> v, long long x){
        int n=v.size();
        int res=-1;
        int l=0,r=n-1;
        long long  mid=0;
        while(l<=r){
         mid=(l+r)/2;
        if(v[mid]==x) {
            res=mid;
            r=mid-1;
        }
        if(v[mid]>x) r=mid-1;
        else l=mid+1;
        }
        return mid;
    }
    int indexee1(vector<long long> v, long long x){
        int n=v.size();
        int res=-1;
        int l=0,r=n-1;
        long long mid=0;
        while(l<=r){
         mid=(l+r)/2;
        if(v[mid]==x) {
            res=mid;
            l=mid+1;
        }
        if(v[mid]>x) r=mid-1;
        else l=mid+1;
        }
         return mid;
    }
    pair<long,long> indexes(vector<long long> nums, long long target)
    {
        pair<long, long>p;

          long long l=0,r=nums.size()-1;
          long long first=-1,last=-1;
        while(r>=l){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                 first=mid;
                 r=mid-1;
            }
            if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        l=0;r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
           if(nums[mid]==target){
                last=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        p.first=first;p.second=last;
        return p;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends