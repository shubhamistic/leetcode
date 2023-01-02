class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> map;
        // storing the count of occurence of each
        // character into the hash map.
        int length = 0;
        for(int i=0 ; i < s.size() ; i++){
            if(map.count(s[i]) == 0){
                map[s[i]] = 0;
            }
            map[s[i]]++;
            if(map[s[i]]%2 == 0){
                length += 2;
            }
        }
        if(s.size() > length){
            return length+1;
        }
        return length;
    }
};