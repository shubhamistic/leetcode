class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // storing the index, value pair in map so that we
        // will have the correct order even after sorting.
        unordered_map<int, int> map;
        for(int i=0 ; i < score.size() ; i++){
            map[i] = score[i];
        }

        // sorting the array
        sort(score.begin(), score.end(), greater <>());
        unordered_map<int, int> map2;
        for(int i=0 ; i < score.size() ; i++){
            map2[score[i]] = i+1;
        }

        // creating the string vector
        vector<string> ans;
        for(int i=0 ; i < score.size() ; i++){
            if(map2[map[i]] == 1){
                ans.push_back("Gold Medal");
            }
            else if(map2[map[i]] == 2){
                ans.push_back("Silver Medal");
            }
            else if(map2[map[i]] == 3){
                ans.push_back("Bronze Medal");
            }
            else{
                ostringstream str1;
                str1 << map2[map[i]];
                ans.push_back(str1.str());
            }
        }
        return ans;
    }
};