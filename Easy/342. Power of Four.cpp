class Solution {
public:
    bool isPowerOfFour(int n) {
        if((n == -2147483648) || (n == 2)){
            // it is an integer overflow condition.
            return false;
        }
        return n !=0 && ((n&(n-1)) == 0) && !(n & 0xAAAAAAAA);
    }
};