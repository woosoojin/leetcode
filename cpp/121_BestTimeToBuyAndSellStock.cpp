class Solution {
public:
    int buy = INT_MAX; // stock price when I bought stock.
    int maxProfitValue = 0;

    int maxProfit(vector<int>& prices) {
        for (auto currentPrice : prices) {
            maxProfitValue = max(maxProfitValue, currentPrice - buy);
            buy = min(buy, currentPrice);
        }

        return maxProfitValue;
    }
};