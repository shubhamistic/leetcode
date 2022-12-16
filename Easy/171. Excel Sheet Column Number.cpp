class Solution {
public:
    int powerOf26(int n){
        // calculates (26^n)
        int result = 1;
        for(int i=0 ; i<n ; i++){
            result = result*26;
        }
        return result;
    }

    // main-function
    int titleToNumber(string columnTitle) {
        int str_len = columnTitle.length();
        int sum = 0;
        for(int i=0 ; i<str_len ; i++){
            sum = sum + (columnTitle[i]-64)*powerOf26(str_len - i-1);
        }
        return sum;
    }
};