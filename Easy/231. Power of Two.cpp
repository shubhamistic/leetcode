class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == -2147483648){
            // it is an integer overflow condition.
            return false;
        }
        if(n && ( !( n & (n - 1) ) ) ){
            return true;
        }
        return false;
    }
};