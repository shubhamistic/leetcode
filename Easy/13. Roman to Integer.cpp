class Solution {
public:
    int checkPrecedence(char a, char b){
        int pre1;
        if(a == 'M'){
            pre1 = 7;
        }
        else if(a == 'D'){
            pre1 = 6;
        }
        else if(a == 'C'){
            pre1 = 5;
        }
        else if(a == 'L'){
            pre1 = 4;
        }
        else if(a == 'X'){
            pre1 = 3;
        }
        else if(a == 'V'){
            pre1 = 2;
        }
        else if(a == 'I'){
            pre1 = 1;
        }

        int pre2;
        if(b == 'M'){
            pre2 = 7;
        }
        else if(b == 'D'){
            pre2 = 6;
        }
        else if(b == 'C'){
            pre2 = 5;
        }
        else if(b == 'L'){
            pre2 = 4;
        }
        else if(b == 'X'){
            pre2 = 3;
        }
        else if(b == 'V'){
            pre2 = 2;
        }
        else if(b == 'I'){
            pre2 = 1;
        }

        if(pre1 >= pre2){
            return 1;
        }
        return 0;
    }

    int getNum(char roman){
        if(roman == 'I'){
            return 1;
        }
        else if(roman == 'V'){
            return 5;
        }
        else if(roman == 'X'){
            return 10;
        }
        else if(roman == 'L'){
            return 50;
        }
        else if(roman == 'C'){
            return 100;
        }
        else if(roman == 'D'){
            return 500;
        }
        else if(roman == 'M'){
            return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int sum = 0;
        int i;
        for(i = 0 ; i < s.length()-1 ; i++){
            int result = checkPrecedence(s[i], s[i+1]);
            if(result){
                sum = sum + getNum(s[i]);
            }
            else{
                sum = sum + (getNum(s[i+1]) - getNum(s[i]));
                i++;
            }
        }
        sum = sum + getNum(s[i]);
        return sum;
    }
};