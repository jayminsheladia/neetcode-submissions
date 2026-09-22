class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int l = 0, i = 1;
        while(i < prices.size()){
            if(prices[l] > prices[i]){
                l = i;
                i++;
            }
            else if (prices[l] <= prices[i]){
                profit = max(profit, prices[i] - prices[l]);
                i++;
            }
        } 
        return profit;
    }
};
