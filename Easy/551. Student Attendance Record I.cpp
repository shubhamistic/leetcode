class Solution {
public:
    bool checkRecord(string s) {
        int absCount = 0;
        int lateCount = 0;
        for(int i=0 ; i < s.size() ; i++){
            if(s[i] == 'L'){
                lateCount++;
                // if the student was late for 3 or more consecutive days.
                if(lateCount >= 3) {return false;}
            }
            else {lateCount = 0;}

            if(s[i] == 'A'){
                absCount++;
                //if the student was absent for 2 or more than 2 days total.
                if(absCount >= 2) {return false;}
            }
        }
        return true;
    }
};