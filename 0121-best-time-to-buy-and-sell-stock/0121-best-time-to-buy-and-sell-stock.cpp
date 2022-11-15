class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int max = 0;
        if (prices.size() <= 1) return max;
        
        while (right <= prices.size() - 1){
            
            while (prices[left] > prices[right] && left < right){
                left++;
                if (left == prices.size() - 1)
                    return max;
                else if(left == right)
                    right++;
            }
            int profit = prices[right] - prices[left];
            if (profit > max)
                max = profit;
            right++;
        }
        return max;
    }
};