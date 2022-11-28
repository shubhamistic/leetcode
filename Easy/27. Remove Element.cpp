class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for(int i=0 ; i < size ; i++){
            if(nums[i] == val){
                int j=i;
                for( ; ((j<size) && (nums[j]==val)) ; j++);
                if(j != size){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        int count = 0;
        for( ; ((count<size) && (nums[count]!=val)) ; count++);

        return count;
    }
};