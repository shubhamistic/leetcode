class Solution {
public:

    bool isAlpha(char c){
        if(( (c >= 65) && (c <= 90)  ) ||
           ( (c >= 97) && (c <= 122) ) ||
           ( (c >= 48) && (c <= 57)  ) )
        {return true;}

        return false;
    }

    bool isEqual(char s1, char s2){
        // converting the upper case alphabets to lower case
        if(s1 >= 97){
            s1 = s1-32;
        }
        if(s2 >= 97){
            s2 = s2-32;
        }

        // comparing the character
        if(s1 == s2){
            return true;
        }
        return false;
    }

    // main-function
    bool isPalindrome(string s) {
        int str_len = s.length();
        int non_alnum_count = 0;
        for(int i=0 ; i<((str_len + non_alnum_count+1)/2) ; i++){
            if (isAlpha(s[i])){
                int j;
                for(j = str_len-i+non_alnum_count-1 ; (! isAlpha(s[j])) ; j--)
                {
                    non_alnum_count--;
                }
                if (! isEqual(s[i], s[j])){
                    return false;
                }
            }
            else{
                non_alnum_count++;
            }
        }
        return true;
    }
};