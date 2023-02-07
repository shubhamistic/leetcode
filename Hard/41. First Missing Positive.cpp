class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool foundOne = false;
        for(int i=0 ; i < nums.size() ; i++){
            if(nums[i] == 1) {foundOne = true;}
            if(nums[i] < 1 || nums[i] > nums.size()){
                nums[i] = 1;
            }
        }

        if(!foundOne) {return 1;}

        for(int i=0 ; i < nums.size() ; i++){
            int val = nums[i];
            if(nums[i] < 0){
                val = -nums[i];
            }

            if(nums[val-1] >= 0){
                nums[val-1] = -(nums[val-1]);
            }
        }

        int i;
        for(i=0 ; i < nums.size() ; i++){
            if(nums[i] > 0){
                break;
            }
        }
        return i+1;
    }
};