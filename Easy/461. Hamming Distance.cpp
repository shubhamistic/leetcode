class Solution {
public:
    int hammingDistance(int x, int y) {
        if(x == y) {return 0;}

        int smallest;
        int largest;
        if(x < y){
            smallest = x;
            largest = y;
        }
        else{
            smallest = y;
            largest = x;
        }
        int count = 0;
        while(smallest > 0){
            if(((smallest%2 == 0) && (largest%2 == 1)) ||
               ((smallest%2 == 1) && (largest%2 == 0)))
            {
                count++;
            }
            smallest /= 2;
            largest /= 2;
        }

        while(largest > 0){
            if(largest%2 == 1){
                count++;
            }
            largest /= 2;
        }

        return count;
    }
};