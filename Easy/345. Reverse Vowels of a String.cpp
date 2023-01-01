class Solution {
public:
    bool isVowel(char c){
        if((c == 'a') || (c == 'A') ||
           (c == 'e') || (c == 'E') ||
           (c == 'i') || (c == 'I') ||
           (c == 'o') || (c == 'O') ||
           (c == 'u') || (c == 'U'))
        {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        // index counter from beginning
        int i = 0;
        // index counter from last
        int j = s.size() -1;

        while(i < j){
            if((isVowel(s[i])) && (isVowel(s[j]))){
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;

                i++;
                j--;
            }

            if(!isVowel(s[i])) {i++;}
            if(!isVowel(s[j])) {j--;}
        }
        return s;
    }
};