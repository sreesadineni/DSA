class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        // Appraoch 1 :vector<int>vec;
        priority_queue<int>vec;
        map<int,int> mp;
        for(int i=0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        for( auto x: mp){
            vec.push(x.second);
        }
       // sort(vec.begin(),vec.end(),greater<int>());
        //for(auto x:vec) cout<<x<<endl;
        int sum=0,c=0;
         while(!vec.empty()){
            sum+=vec.top();
             vec.pop();
            if(sum>=n/2){
                return c+1;
            }
            else{
                c++;
            }
        }
        return c;
    }
};