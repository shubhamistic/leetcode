class Solution {
public:
    char findTheDifference(string s, string t) {
        int tSum = 0;
        int sSum = 0;
        int i;
        for(i=0 ; i < s.size() ; i++){
            tSum += t[i];
            sSum += s[i];
        }
        tSum += t[i];
        return (tSum - sSum);
    }
};