class Solution {
public:
    // helper-function
    int smaller(int a, int b){
        if(a < b){
            return a;
        }
        return b;
    }

    // main-function
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;

        int maxArea = 0;
        int area = 0;
        while(i < j){
            area = (j-i) * smaller(height[i], height[j]);
            if(area > maxArea) {maxArea = area;}

            // incrementing and decrementing i & j respectively.
            if(height[i] < height[j]) {i++;}
            else {j--;}
        }
        return maxArea;
    }
};