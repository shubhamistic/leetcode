class Solution {
public:
    int findComplement(int num) {
        int n = num;
        int twoPower = 1;
        int ans = 0;
        while(num > 0){
            twoPower *= (num == n)?1:2;
            if(num%2 == 0){
                ans = twoPower + ans;
            }
            num = num/2;
        }
        return ans;
    }
};