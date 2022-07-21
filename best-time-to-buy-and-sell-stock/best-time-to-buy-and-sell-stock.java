class Solution {
    public int maxProfit(int[] prices) {
        int mini=Integer.MAX_VALUE;
        int profit=0,sell=0;
        int n=prices.length;
        for(int  i=0; i<n ;i++ ){
            if(prices[i]<mini) mini=prices[i];
            profit=prices[i]-mini;
            if(profit>sell) sell=profit;
        }
        
        return sell;
    }
}