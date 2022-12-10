class Solution {
public:
    int climbStairs(int n) {
        /*=======================================================
        *we can clearly see it is following a 'fibonoacci series'
        +--------+----------+
        |  input | solution |
        +--------+----------+
        |    1   |    1     |
        |    2   |    2     |
        |    3   |    3     |
        |    4   |    5     |
        |    5   |    8     |
        |    6   |    13    |
        |    7   |    21    |
        +--------+----------+
        =======================================================*/

        int first_num = 0;
        int second_num = 1;

        for(int i=1 ; i<=n ; i++){
            int sum = first_num + second_num;
            first_num = second_num;
            second_num = sum;
        }

        return second_num;
    }
};