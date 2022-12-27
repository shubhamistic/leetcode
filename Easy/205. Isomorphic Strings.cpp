class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char arr[127];
        bool isAdded[127];
        // initializing the array with null character.
        for(int i=0 ; i < 127 ; i++){
            arr[i] = '\0';
            isAdded[i] = false;
        }

        int str_len = s.length();
        for(int i=0 ; i < str_len ; i++){
            if((arr[s[i]] == '\0') && (isAdded[t[i]] == false)){
                arr[s[i]] = t[i];
                isAdded[t[i]] = true;
            }
            else if((arr[s[i]] != t[i])){
                return false;
            }
        }
        return true;
    }
};