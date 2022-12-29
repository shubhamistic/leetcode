class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
            int sum = 0;
            int n = num;
            while(n > 0){
                int rem = n%10;
                sum = sum + rem;
                n = n/10;
            }
            num = sum;
        }
        return num;
    }
};