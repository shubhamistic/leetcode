class Solution {
public:
    void reverseString(vector<char>& s) {
        int iterationCount = s.size()/2;
        for(int i=0 ; i < iterationCount ; i++){
            int temp = s[i];
            s[i] = s[s.size() -1 -i];
            s[s.size() -1 -i] = temp;
        }
    }
};