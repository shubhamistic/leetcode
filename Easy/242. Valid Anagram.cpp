class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int* sHash = new int[26];
        int* tHash = new int[26];
        // initializing the values of sHash[] & tHash[] array with zero.
        for(int i=0 ; i<26 ; i++){
            sHash[i] = 0;
            tHash[i] = 0;
        }
        // incrementing the count of each character by 1;
        for(int i=0 ; i<s.length() ; i++){
            sHash[s[i] - 97] += 1;
            tHash[t[i] - 97] += 1;
        }
        // checking if count of character is same in both the arrays.
        // if(same) {return true}
        // else {return false}
        for(int i=0 ; i<26 ; i++){
            if(sHash[i] != tHash[i]){
                return false;
            }
        }
        return true;
    }
};