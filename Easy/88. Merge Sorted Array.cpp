class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // if nums2[] is empty that means we have to do nothing.
        if(n == 0){
            return;
        }

        int nums1_track = m-1;
        int nums2_track = n-1;
        int i;

        // placing the largest element of both the array
        // nums1[] and nums2[] to the last of nums1[].
        for(i=(m+n-1) ;((nums1_track>=0) && (nums2_track>=0)); i--){
            if(nums1_track < 0){
                break;
            }
            if(nums1[nums1_track] > nums2[nums2_track]){
                nums1[i] = nums1[nums1_track];
                nums1_track--;
            }
            else{
                nums1[i] = nums2[nums2_track];
                nums2_track--;
            }
        }

        // after placing the largest elements to the last of nums1[]
        // than placing the element of nums2[] (if remaining)
        // to the nums1[] array.
        int count = 0;
        while(count <= nums2_track){
            nums1[++nums1_track] = nums2[count++];
        }
    }
};