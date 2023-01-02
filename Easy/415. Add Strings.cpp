class Solution {
public:
    string addStrings(string num1, string num2) {
        string sumStr;
        int carry = 0;
        if(num1.size() < num2.size()){
            string temp = num2;
            num2 = num1;
            num1 = temp;
        }
        int j = num1.size();
        for(int i=num2.size()-1 ; i >= 0 ; i--){
            int sum = (num1[--j]-48) + (num2[i]-48) + carry;
            if(sum > 9){
                sum = sum - 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            char c = (sum+48);
            string s;
            s.push_back(c);
            sumStr = s + sumStr;
        }
        if(carry == 1){
            while((carry != 0) && (j > 0)){
                int sum = (num1[--j] - 48) + carry;
                if(sum > 9){
                    sum = sum - 10;
                    carry = 1;
                }
                else{
                    carry = 0;
                }
                char c = (sum+48);
                string s;
                s.push_back(c);
                sumStr = s + sumStr;
            }
            if(carry == 1){
                sumStr = "1" + sumStr;
            }
        }
        while(--j >= 0){
            sumStr = num1[j] + sumStr;
        }
        return sumStr;
    }
};