#include <unordered_map>

class Solution {
public:

    int abs(int a, int b){
        int diff = a - b;
        if(diff < 0){
            return (-diff);
        }
        return diff;
    }

    // main-function
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i=0 ; i < nums.size() ; i++){
            if((map.count(nums[i]) > 0) && (abs(map[nums[i]], i) <= k)){
                return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};