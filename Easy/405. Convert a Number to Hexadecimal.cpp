class Solution {
public:
    char getHexCode(int n){
        if(n < 10){
            return (48+n);
        }
        return (87+n);
    }

    string toHex(int num) {
        string hexString;
        if(num == 0){
            hexString.push_back('0');
            return hexString;
        }
        unsigned int n = num;
        cout << num;
        while(n > 0){
            hexString = getHexCode(n%16) + hexString;
            n = n/16;
        }
        return hexString;
    }
};