class Solution {
public:
    bool detectCapitalUse(string word) {
        bool rule = false;
        // rule contains either true or false
        // 1) true means it is following lower-case rule.
        // 2) false means it is following upper-case rule.
        bool ans = true;
        if((word[0] >= 97) && (word[0] <= 122)){
            rule = true;
        }
        if(word.size() > 1){
            if(((word[1] >= 65) && (word[1] <= 90)) && (!rule)){
                rule = false;
            }
            else if((word[1] >= 97) && (word[1] <= 122)){
                rule = true;
            }
        }
        for(int i=1 ; i < word.size() ; i++){
            // case if string should follow uper-case rule but it
            // following lower-case rule and vice-versa.
            if((((word[i] >= 65) && (word[i] <= 90)) && (rule)) ||
               (((word[i] >= 97) && (word[i] <= 122)) && (!rule)))
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};