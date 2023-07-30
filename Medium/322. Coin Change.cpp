class Solution {
public:
    // helper-function
    int coinChangeHelper(vector<int>& coins, int amount, vector<int>& dp){
        if ( amount == 0 ){
            return 0;
        }
        if ( amount < 0 ){
            return INT_MAX;
        }

        if (dp[amount] != -1){
            return dp[amount];
        }

        int min = INT_MAX;
        for(int i=0 ; i < coins.size(); i++){
            int ans = coinChangeHelper(coins, amount - coins[i], dp);

            if (ans < min){
                min = ans + 1;
            }
        }

        dp[amount] = min;
        return min;
    }

    // main-function
    int coinChange(vector<int>& coins, int amount) {
        // using dp (recursion + memorization) method to solve.

        vector<int> dp(amount + 1, -1);

        int ans = coinChangeHelper(coins, amount, dp);

        if (ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};