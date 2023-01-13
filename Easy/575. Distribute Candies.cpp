class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> set;
        int count = 0;
        for(int i=0 ; i < candyType.size() ; i++){
            if(set.count(candyType[i]) == 0){
                set.insert(candyType[i]);
                count++;
            }
        }

        if(candyType.size()/2 <= count){
            return candyType.size()/2;
        }
        else{
            return count;
        }
    }
};