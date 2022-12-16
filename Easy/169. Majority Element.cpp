class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Solving this problem by Moore’s voting Algorithm.

        // NOTE -> THE ALGORITHM ONLY WORKS WHEN THE MAXIMUM
        // OCCURRING ELEMENT IS MORE THAN (SIZE_OF_ARRAY/2) TIMES.
        int res = 0;
        int count = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[res]) {
                count++;
            } else {
                count--;
            }

            if(count == 0) {
                res = i;
                count = 1;
            }
        }
        return nums[res];
    }
};