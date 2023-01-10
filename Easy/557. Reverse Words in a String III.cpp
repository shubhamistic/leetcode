class Solution {
public:
    string reverseWords(string s) {
        int lastSpace = 0;
        for(int i=0 ; i < s.size() ; i++){
            if((s[i] == ' ') || (i == s.size()-1)){
                if(i == s.size()-1){
                    i++;
                }
                cout << lastSpace << " " << (i+lastSpace)/2 << endl;
                int decr = 0;
                for(int j=lastSpace ; j < (i +lastSpace)/2 ; j++){
                    char temp = s[j];
                    s[j] = s[i -decr -1];
                    s[i -decr -1] = temp;
                    decr++;
                }
                lastSpace = i+1;
            }
        }
        return s;
    }
};