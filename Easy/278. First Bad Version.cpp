// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // using Binary Search Approach.
        int left = 0;
        int right = n;
        int last_bad = 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(isBadVersion(mid)){
                last_bad = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return last_bad;
    }
};