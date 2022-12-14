class Solution {
public:

    string convertToTitle(int columnNumber) {

        char str[1000];
        int str_index = 0;

        while(columnNumber > 26){
            if((columnNumber%26) == 0){
                str[str_index++] = 64+26;
                columnNumber = (columnNumber/26)-1;
            }
            else{
                str[str_index++] = 64+(columnNumber%26);
                columnNumber = columnNumber/26;
            }
        }
        str[str_index++] = char(64+columnNumber);
        str[str_index] = '\0';

        //reversing the string
        for(int i=0 ; i<str_index/2 ; i++){
            char temp = str[i];
            str[i] = str[str_index-i-1];
            str[str_index-i-1] = temp;
        }

        return str;
    }
};