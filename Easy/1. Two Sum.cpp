class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> returnarr;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[i]+nums[j] == target) {
                    returnarr.push_back(i);
                    returnarr.push_back(j);
                    return returnarr;
                }
            }
        }
       return returnarr; 
    }
};
