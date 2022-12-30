class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i=0 ; i <= n ; i++){
            int n = i;
            int count = 0;
            while(n > 0){
                int rem = n%2;
                if(n%2 == 1){
                    count++;
                }
                n = n/2;
            }
            arr.push_back(count);
        }
        return arr;
    }
};