class Solution {
public:
    // helper-function
    bool isDigit(char c){
        if(c >= 48 && c <= 57){
            return true;
        }
        return false;
    }

    // main-function
    int myAtoi(string s) {
        bool isNegative = false;
        bool isPositive = false;
        int num = 0;
        for(int i=0 ; i < s.size() ; i++){
            if(!isDigit(s[i])){
                if(s[i] == ' ' && num == 0 && (!isNegative && !isPositive)){
                    continue;
                }
                else if(s[i] == '+' && num == 0){
                    if(isNegative || isPositive){
                        return 0;
                    }
                    isPositive = true;
                }
                else if(s[i] == '-' && num == 0){
                    if(isPositive || isNegative){
                        return 0;
                    }
                    isNegative = true;
                }
                else {break;}
            }
            else{
                if(!isNegative) {isPositive = true;}
                if(isPositive){
                    if(num > INT_MAX/10) {return INT_MAX;}
                }
                if(isNegative){
                    if((-num) < INT_MIN/10) {return INT_MIN;}
                }
                for(int j=0 ; j <= (s[i] - 48); j++){
                    if(isPositive){
                        if((num*10 + j) == INT_MAX) {return INT_MAX;}
                    }
                    if(isNegative){
                        if((-num*10 - j) == INT_MIN) {return INT_MIN;}
                    }
                }
                num = num*10 + (s[i] - 48);
            }
        }
        if(isNegative) {return -num;}
        return num;
    }
};