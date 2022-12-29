// using string libraries to convert number into string in c++.
#include <sstream>
#include <string>

class Solution {
public:
    // method to convert lower-limit & upper-limit to string.
    string getFinalString(int lowerLimit, int upperLimit){
        // converting lower-limit value to string.
        ostringstream str1;
        str1 << lowerLimit;
        string lowerLimStr = str1.str();
        // converting upper-limit value to string.
        ostringstream str2;
        str2 << upperLimit;
        string upperLimStr = str2.str();
        if(lowerLimit == upperLimit){
            return lowerLimStr;
        }
        return (lowerLimStr + "->" + upperLimStr);
    }

    // main-function
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> strArr;
        if(nums.size() == 0){
            return strArr;
        }
        int lowerLimit = nums[0];
        int count = 0;
        int upperLimit;
        int i;
        for(i=0 ; i<nums.size() ; i++){
            if((lowerLimit + count++) != nums[i]){
                upperLimit = nums[i-1];
                // pushing it to the string array.
                strArr.push_back(getFinalString(lowerLimit, upperLimit));
                lowerLimit = nums[i--];
                count = 0;
            }
        }
        // pushing the last string into the string array.
        upperLimit = nums[i-1];
        strArr.push_back(getFinalString(lowerLimit, upperLimit));
        return strArr;
    }
};