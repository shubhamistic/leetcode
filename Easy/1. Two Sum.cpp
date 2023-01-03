class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> arr;
        for(int i=0 ; i < nums.size() ; i++){
            if(map.count(target - nums[i]) > 0){
                arr.push_back(map[target - nums[i]]);
                arr.push_back(i);
            }
            map[nums[i]] = i;
        }
        return arr;
    }
};
