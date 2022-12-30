// #include <unordered_map>
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // pattern, word map.
        unordered_map<char, string> mapPS;
        // word, pattern map.
        unordered_map<string, char> mapSP;
        int wordIterator = 0;
        for(int i=0 ; i < pattern.size() ; i++){
            string tempStr;
            for( ; wordIterator < s.size() ; wordIterator++){
                tempStr.push_back(s[wordIterator]);
                if((s[wordIterator+1] == ' ') || (wordIterator == s.size()-1))
                {
                    wordIterator += 2;
                    break;
                }
            }
            if(tempStr.size() == 0){
                return false;
            }
            if((mapSP.count(tempStr) == 0) && (mapPS.count(pattern[i]) == 0)){
                mapPS[pattern[i]] = tempStr;
                mapSP[tempStr] = pattern[i];
            }
            if((mapSP[tempStr] == pattern[i]) &&
               (mapPS[pattern[i]] == tempStr))
            {
                continue;
            }
            else{
                return false;
            }
        }
        if(s.size() > (wordIterator-1)){
            return false;
        }
        return true;
    }
};