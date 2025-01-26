int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0; 
    
    int minPrice = prices[0]; 
    int maxProfit = 0; 
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice; 
            if (profit > maxProfit) {
                maxProfit = profit; 
            }
        }
    }
    
    return maxProfit;
}