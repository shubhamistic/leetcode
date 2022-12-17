class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int strs_size = strs.size();
        string temp = strs[0];
        for(int i=1 ; i<strs_size ; i++){
            int cur_length = 0;
            for(int j=0 ; temp[j] ; j++){
                if(temp[j] == strs[i][j]){
                    cur_length++;
                }
                else{
                    break;
                }
            }
            temp.resize(cur_length);
        }
        return temp;
    }
};