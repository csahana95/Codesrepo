class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSoFar = INT_MIN;
        if(prices.size()<2)
            return 0;
        int minElementSoFar = prices[0];
        
        for(int i=1;i<prices.size();i++){
            minElementSoFar = min(minElementSoFar, prices[i]);
            int price = prices[i]-minElementSoFar;
            maxSoFar = max(price, maxSoFar);
        }
        return maxSoFar;
            
    }
    
};
