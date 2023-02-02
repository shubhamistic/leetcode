class Solution {
public:
    int strStr(string haystack, string needle) {
        unordered_set<string> set;
        set.insert(needle);
        for(int i=0 ; i < haystack.size() ; i++){
            if(haystack[i] == needle[0]){
                string str;
                for(int j=i ; ((j < i + needle.size()) && (j < haystack.size())) ; j++){
                    str.push_back(haystack[j]);
                }
                if(set.count(str) > 0){
                    return i;
                }
            }
        }
        return -1;
    }
};