class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*---APPROACH---------------------------------------------------
        * 1) Traversing the array from the rear to front (size-1 to 0).
        *-----
        * 2) Finding the maximum number after each iteration and storing
        *    it into the variable 'max_num'.
        *-----
        * 3) After finding the maximum number , finding the number which
        *    is smaller than the current max number and calculating the
        *    profit.
        *-----
        * 4) if {the (difference of maximum number and profit) is more
        *       than the previously calculated profit}
        *    than {updating the profit value}.
        *-----
        * 5) Returning the maximum profit.
        --------------------------------------------------------------*/

        int size = prices.size();
        int max_num = 0;
        int min_num = 0;
        int profit = 0;

        for(int i=size-1 ; i>=0 ; i--){
            if(prices[i] > max_num){
                max_num = prices[i];
                min_num = max_num;
            }
            else if(((max_num - prices[i]) > profit) && (prices[i] < min_num)){
                min_num = prices[i];
                profit = max_num - min_num;
            }
        }
        return profit;
    }
};