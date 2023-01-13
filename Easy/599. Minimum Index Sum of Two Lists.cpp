class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        // stroing the strings in map to achieve O(n) Complexity.
        unordered_map<string, int> map;
        for(int i=0 ; i < list1.size() ; i++){
            if(map.count(list1[i]) == 0){
                map[list1[i]] = i;
            }
        }

        // finding the lowest least-index-sum.
        int lowest = INT_MAX;
        for(int i=0 ; i < list2.size() ; i++){
            if(map.count(list2[i]) > 0){
                int sum = map[list2[i]] + i;
                if(sum < lowest){
                    lowest = sum;
                }
            }
        }

        // storing the values in string vector to return.
        vector<string> strArr;
        for(int i=0 ; i < list2.size() ; i++){
            if(map.count(list2[i]) > 0){
                int sum = map[list2[i]] + i;
                if (sum == lowest){
                    strArr.push_back(list2[i]);
                }
            }
        }
        return strArr;
    }
};