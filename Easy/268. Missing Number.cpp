class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i=0 ; i<nums.size() ; i++){
            sum = sum + nums[i];
        }
        return ((((nums.size()+1)*(nums.size()))/2) - sum);
    }
};

/*---APPROACH-----------------------------------------------------------------
  STEPS:
* 1) Adding all the numbers in the array and storing them in a 'sum' variable.
* 2) Calculating the 'Sn' (sum of all natural number up to n) by using the
     formulae n(n-1)/2.
* 3) On subtracting the Sn from sum (Sn - sum) we will get our result.
----------------------------------------------------------------------------*/