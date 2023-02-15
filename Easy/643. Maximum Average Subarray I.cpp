class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int firstElement = nums[0];
        double sum = 0;
        int kPointer = 0;
        double maxAvg = INT_MIN;

        for(int i=0 ; i < nums.size() ; i++){
            sum = sum + nums[i];
            if(kPointer == k-1){
                double avg = sum/k;
                if(avg > maxAvg) {maxAvg = avg;}

                sum = sum - nums[i -k +1];
                kPointer--;
            }
            kPointer++;
        }
        return maxAvg;
    }
};