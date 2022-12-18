class Solution {
public:
    int hammingWeight(uint32_t n) {
        int one_count = 0;
        while(n>0){
            int rem = n%2;
            if(rem == 1){
                one_count++;
            }
            n = n/2;
        }
        return one_count;
    }
};