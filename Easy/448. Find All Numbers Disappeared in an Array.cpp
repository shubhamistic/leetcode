class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // using an efficient cyclic sort technique.
        int i = 0;
        while(i < nums.size()){
            if((nums[i] == i+1) || (nums[i] == nums[nums[i]-1])){
                i++;
            }
            else{
                int temp = nums[i];
                nums[i] = nums[nums[i]-1];
                nums[temp-1] = temp;
            }
        }

        // checking the missing number
        // now, on every index of the vector the element is (index+1).
        // i.e. nums[i] has the value (i+1);
        vector<int> arr;
        for(int i=0 ; i < nums.size() ; i++){
            if(nums[i] != i+1){
                arr.push_back(i+1);
            }
        }
        return arr;
    }
};