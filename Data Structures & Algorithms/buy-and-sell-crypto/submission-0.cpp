class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, maxProfit = 0;
        for(int right =1; right < prices.size(); right++){
            if(prices[right] < prices[left]){
                left = right;
            } else {
                maxProfit = max(maxProfit, prices[right]- prices[left]);
            }
        }
        return maxProfit;
    }
};
