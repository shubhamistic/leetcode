class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        int temp = 0;
        while(temp < 1000){
            int sum = 0;
            // finding sum of square of each digit of a number.
            while(num > 0){
                int rem = num%10;
                num = num/10;
                sum = sum + (rem*rem);
            }
            if(sum == 1){
                return true;
            }
            num = sum;
            temp++;
        }
        return false;
    }
};