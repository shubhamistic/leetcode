class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0){
            return "0";
        }

        bool containsNegative = false;
        if(num < 0){
            num = -(num);
            containsNegative = true;
        }
        string ans;
        while(num > 0){
            ostringstream str1;
            str1 << (num%7);
            ans = str1.str() + ans;
            num = num/7;
        }
        if(containsNegative){
            ans = "-" + ans;
            return ans;
        }
        return ans;
    }
};