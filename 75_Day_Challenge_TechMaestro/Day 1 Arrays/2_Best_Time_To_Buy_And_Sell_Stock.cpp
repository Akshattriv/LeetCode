class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minI = prices[0], size = prices.size(), profit = 0;
        for(int i=0; i<size; ++i){
            if(prices[i]<minI){
                minI = prices[i];
            }
            if((prices[i] - minI) > profit){
                profit = prices[i] - minI;
            }
        }
        return profit;
    }
};
// Keep a track of minimum element by checking each iteration and also profit each iteration. Done in O(N)
