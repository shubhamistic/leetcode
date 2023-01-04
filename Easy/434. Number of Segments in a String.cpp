class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        // variable to check if any character encountered or not
        bool charEnc = false;
        for(int i=0 ; i < s.size() ; i++){
            if(s[i] != ' '){
                charEnc = true;
            }
            if(((s[i] == ' ') || (i == s.size()-1)) && (charEnc)){
                count++;
                charEnc = false;
            }
        }
        return count;
    }
};