class Solution {
    public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();

        // 'array_index_pointer' will keep the tract of 'nums[]'
        // index where we have to insert the next element.
        int array_index_pointer = 1;

        // we will compare each and element of nums[] with
        // 'nums_element' variable
        int nums_element = nums[0];
        for(int i=1 ; i < size ; i++){
            if(nums[i] != nums_element){
                nums[array_index_pointer++] = nums[i];
                nums_element = nums[i];
            }
        }
        return array_index_pointer;
    }
};