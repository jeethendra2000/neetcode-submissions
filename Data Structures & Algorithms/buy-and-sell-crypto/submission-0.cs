public class Solution {
    public int MaxProfit(int[] prices) {
        var bestBuy = int.MaxValue;
        int profit = 0;

        foreach(var price in prices){
            if(price < bestBuy){
                bestBuy = price;
            }
            else{
                profit = Math.Max(profit, price - bestBuy);
            }
        }

        return profit;
    }
}
