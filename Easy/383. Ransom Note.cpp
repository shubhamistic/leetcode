class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magMap;
        unordered_map<char, int> ranMap;

        // counting the occurence of each character in the
        // magazine string.
        for(int i=0 ; i < magazine.size() ; i++){
            if(magMap.count(magazine[i]) == 0){
                magMap[magazine[i]] = 0;
            }
            magMap[magazine[i]]++;
        }

        // checking if magazine character are sufficient to
        // make the ransomNote.
        for(int i=0 ; i < ransomNote.size() ; i++){
            if(ranMap.count(ransomNote[i]) == 0){
                ranMap[ransomNote[i]] = 0;
            }
            ranMap[ransomNote[i]]++;
            if(magMap[ransomNote[i]] < ranMap[ransomNote[i]]){
                return false;
            }
        }
        return true;
    }
};