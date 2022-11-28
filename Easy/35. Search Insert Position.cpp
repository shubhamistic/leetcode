class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // applying binary search algorithm.
        int beg = 0;
        int end = nums.size() - 1;
        int mid;
        while ( beg <= end)  {
            mid = (beg + end) / 2;
            if (nums[mid] == target)  {
                return mid;
            }
            if (nums[mid] > target){
                end = mid - 1;
            }
            else if(nums[mid] < target)  {
                beg = mid + 1;
            }
        }
        if(nums[mid]>target){
            return mid;
        }
        else{
            return mid+1;
        }
    }
};