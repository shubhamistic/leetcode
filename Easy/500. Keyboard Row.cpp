class Solution {
public:
    // helper-function
    int tellRow(char c){
        if((c == 'q') || (c == 'w') || (c == 'e') || (c == 'r') ||
           (c == 't') || (c == 'y') || (c == 'u') || (c == 'i') ||
           (c == 'o') || (c == 'p') ||
           (c == 'Q') || (c == 'W') || (c == 'E') || (c == 'R') ||
           (c == 'T') || (c == 'Y') || (c == 'U') || (c == 'I') ||
           (c == 'O') || (c == 'P'))
        {return 1;}

        else if((c == 'a') || (c == 's') || (c == 'd') || (c == 'f') ||
                (c == 'g') || (c == 'h') || (c == 'j') || (c == 'k') ||
                (c == 'l') ||
                (c == 'A') || (c == 'S') || (c == 'D') || (c == 'F') ||
                (c == 'G') || (c == 'H') || (c == 'J') || (c == 'K') ||
                (c == 'L'))
        {return 2;}

        else {return 3;}
    }

    // main-function
    vector<string> findWords(vector<string>& words) {
        vector<string> strVec;
        int row;
        for(int i=0 ; i < words.size() ; i++){
            row = tellRow(words[i][0]);
            int j;
            for(j=0 ; j < words[i].size() ; j++){
                if(tellRow(words[i][j]) != row){
                    break;
                }
            }
            if(j == words[i].size()){
                strVec.push_back(words[i]);
            }
        }
        return strVec;
    }
};
