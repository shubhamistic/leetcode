class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> map;
        // storing the values into the map,
        // map stores <nums[i], occurence of nums[i]>.
        for(int i=0 ; i < nums.size() ; i++){
            if(map.count(nums[i]) == 0){
                map[nums[i]] = 0;
            }
            map[nums[i]]++;
        }

        // now checking its pair element and
        // counting the maximum occurence.
        int maxCount = 0;
        for(int i=0 ; i < nums.size() ; i++){
            if(map.count(nums[i] -1) > 0){
                if(map[nums[i]] + map[nums[i]-1] > maxCount){
                    maxCount = map[nums[i]] + map[nums[i]-1];
                }
            }
        }
        return maxCount;
    }
};