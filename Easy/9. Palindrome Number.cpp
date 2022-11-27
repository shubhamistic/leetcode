class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n = x;
        long long sum = 0;
        while(x){
            sum = sum*10 + x%10;
            x = x/10;
        }
        if(sum == n){
            return true;
        }
        return false;
    }
};