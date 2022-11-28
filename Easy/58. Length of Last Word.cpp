class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        for( ; s[i] == ' ' ; i--);

        int word_count = 0;
        for( ;  ((i>=0) && (s[i] != ' ')) ; i--){
            word_count++;
        }

        return word_count;
    }
};