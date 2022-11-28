class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        if (digits[size-1] != 9){
            digits[size-1]++;
            return digits;
        }
        int i=size-1;
        for( ; ((i>=0) && (digits[i] == 9)) ; i--){
            digits[i] = 0;
        }
        if(i == -1){
            digits[0]++;
            digits.push_back(0);
        }
        else{
            digits[i]++;
        }
        return digits;
    }
};