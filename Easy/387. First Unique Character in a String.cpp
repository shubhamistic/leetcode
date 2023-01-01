class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        /*---APPROACH------------------------------------------
        * 1) if a character encountered for the first time the
        *    map will store index corresponding to it as value.
        *    --BUT--
        *    if it appeared for more than one time than the
        *    map will store value -1 corresponding to it.
        *-----
        * 2) checking the first ever index where we got the
        *    value other than -1 and {returning the index}.
        *    else {returning -1}
        -----------------------------------------------------*/

        // STEP-1
        for(int i=0 ; i < s.size() ; i++){
            if(map.count(s[i]) == 0){
                map[s[i]] = i;
            }
            else{
                map[s[i]] = -1;
            }
        }

        // STEP-2
        for(int i=0 ; i < s.size() ; i++){
            if(map[s[i]] > -1){
                return map[s[i]];
            }
        }
        return -1;
    }
};