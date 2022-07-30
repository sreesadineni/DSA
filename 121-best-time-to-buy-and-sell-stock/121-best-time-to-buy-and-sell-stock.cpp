class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int sell=0,profit=0;
        int maxi=INT_MAX;
        for(int i=0; i<n; i++){
            if(prices[i]<maxi) maxi=prices[i];
            profit=prices[i]-maxi;
            if(profit>sell) sell=profit;
        }
        return sell;
    }
};