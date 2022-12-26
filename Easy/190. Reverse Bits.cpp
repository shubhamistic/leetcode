class Solution {
public:
    void helper(uint32_t n, uint32_t* sum, uint32_t* pow, int iteration){
        if(iteration < 32){
            int rem = n%2;
            helper(n/2, sum, pow, iteration+1);
            if(rem == 1){
                *sum = *sum + *pow;
            }
            *pow = (*pow)*2;
        }
    }

    // main-function
    uint32_t reverseBits(uint32_t n) {
        uint32_t pow = 1;
        uint32_t sum = 0;
        int iteration = 0;
        helper(n, &sum, &pow, iteration);
        return sum;
    }
};