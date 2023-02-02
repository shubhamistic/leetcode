class Solution {
public:
    // helper-function
    string helper(string str){
        string s;
        char num = str[0];
        int length = 0;
        int i;
        for(i=0 ; i < str.size() ; i++){
            if(str[i] != num){
                s.push_back(48 + length);
                s.push_back(str[i-1]);
                num = str[i];
                length = 0;
            }
            length++;
        }
        s.push_back(48 + length);
        s.push_back(str[i-1]);
        return s;
    }

    // main-function
    string countAndSay(int n) {
        string str;
        str.push_back('1');
        for(int i=1 ; i < n ; i++){
            str = helper(str);
        }
        return str;
    }
};