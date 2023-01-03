class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> LastPos;
        int count = 0;
        int maxCount = 0;
        int left = -1;
        for(int i=0 ; i < s.size() ; i++){
            if((LastPos.count(s[i]) > 0) && (LastPos[s[i]] > left)){
                left = LastPos[s[i]];
                count = i - LastPos[s[i]];
                LastPos[s[i]] = i;
            }
            else{
                count++;
                if(count > maxCount){
                    maxCount = count;
                }
                LastPos[s[i]] = i;
            }
        }
        return maxCount;
    }
};