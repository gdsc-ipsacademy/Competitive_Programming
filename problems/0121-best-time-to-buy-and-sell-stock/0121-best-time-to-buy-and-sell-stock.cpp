class Solution {
public:
    void maxProfitFinder(vector<int> &prices, int i , int &minPrice , int &maxProfit)
    {
        //base cae
        if(i== prices.size())
        {
            return;
        }
        
        // sole for one case
        
        if(prices[i]< minPrice) minPrice= prices[i];
        
        int todaysProfit =prices[i]-minPrice;
        
        if(todaysProfit>maxProfit) maxProfit= todaysProfit;
        
    
    maxProfitFinder(prices, i+1, minPrice, maxProfit);
    }
    
    int maxProfit(vector<int>& prices) {
        int minPrice= INT_MAX;
        int maxProfit = INT_MIN;
        
        maxProfitFinder(prices, 0,minPrice,maxProfit);
        
        return maxProfit;
    }
};