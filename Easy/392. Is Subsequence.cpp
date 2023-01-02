class Solution {
public:
    bool isSubsequence(string s, string t) {
        // as null string is Subsequence of all strings.
        if(s.size() == 0){
            return true;
        }

        int sCounter = 0;
        for(int i=0 ; i < t.size() ; i++){
            if(s[sCounter] == t[i]){
                sCounter++;
            }
            if(sCounter == s.size()){
                return true;
            }
        }
        return false;
    }
};