class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /*
        storing the nums1 and nums2 values to the
        unordered set numset1 and numset2 respectively.
        */
        unordered_set<int> numset1, numset2;

        for(int i=0 ; i < nums1.size() ; i++){
            numset1.insert(nums1[i]);
        }
        for(int i=0 ; i < nums2.size() ; i++){
            numset2.insert(nums2[i]);
        }

        // creating the answer-vector and storing the values.
        vector<int> ansVector;
        unordered_set<int> :: iterator itr;
        itr = numset2.begin();
        for(; itr != numset1.end(); itr++){
            if(numset1.count(*itr) > 0){
                ansVector.push_back(*itr);
            }
        }
        return ansVector;
    }
};