class Solution {
public:
    string longestPalindrome(string s) {
        int maxSize = 0;
        int startIndex = 0;
        int endIndex = 0;
        for(int i = 0 ; i < s.size() ; i++){
            int a = i;
            int size = 0;
            int count = 0;
            for(int j = s.size()-1 ; j >= i ; j--){
                if(s[a] != s[j]){
                    size = 0;
                    a = i;
                    j = s.size() -1  -(++count);
                }
                if(s[a] == s[j]){
                    size++;
                    if(size > maxSize){
                        if(j == i){
                            maxSize = size;
                            startIndex = i;
                            endIndex =  i + size;
                            break;
                        }
                    }
                    a++;
                }
            }
        }

        // stroing the characters from [start-index, end-index)
        // into the string 'str' and returning.
        string str;
        for(int i=startIndex ; i < endIndex ; i++){
            str.push_back(s[i]);
        }
        return str;
    }
};