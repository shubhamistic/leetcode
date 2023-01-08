class Solution {
public:
    int fib(int n) {
        if((n == 0) || (n == 1)){
            return n;
        }

        int firstNum = 0;
        int secondNum = 1;
        int sum = 0;
        for(int i=2 ; i<=n ; i++){
            sum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = sum;
        }
        return sum;
    }
};