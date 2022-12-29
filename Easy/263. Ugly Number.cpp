class Solution {
public:
    bool isUgly(int n) {
        /*---APPROACH-----------------------------------------------
         * dividing the number by (2, 3, 5) and if it divides by any
           of these three numbers, dividing it again until we get 1.
             if {we get 1 than returning true}
             else {returning false}
        ----------------------------------------------------------*/
        while(n != 0){
            if(n == 1){
                return true;
            }
            if(n%2 == 0){
                n = n/2;
            }
            else if(n%3 == 0){
                n = n/3;
            }
            else if(n%5 == 0){
                n = n/5;
            }
            else{
                return false;
            }
        }
        return false;
    }
};