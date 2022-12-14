#include <cstdlib> // for using 'calloc() function' for dynamic memory allocation for array.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int nums_size = nums.size();
        char* arr = (char*)calloc(60000, sizeof(char));
        int bucket_size = 60000;
        int sum = 0;

        for(int i=0 ; i<nums_size ; i++){
            if(nums[i] >= 0){
                if(arr[nums[i]]){
                    sum = sum - nums[i];
                }
                else{
                    arr[nums[i]] = 1;
                    sum = sum + nums[i];
                }
            }
            else{
                if(arr[bucket_size+nums[i]]){
                    sum = sum - nums[i];
                }
                else{
                    arr[bucket_size+nums[i]] = 1;
                    sum = sum + nums[i];
                }
            }
        }
        return sum;
    }
};