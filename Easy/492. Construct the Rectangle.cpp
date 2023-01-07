class Solution {
public:
    vector<int> constructRectangle(int area) {
        int len = area;
        int wid = 1;
        int lastLen = area;
        int lastWid = 1;

        while(len >= wid){
            if(len == area/wid){
                lastLen = len;
                lastWid = wid;
            }
            wid++;
            if(area%wid == 0){
                len = area/wid;
            }
        }

        // stroing the values into the vector and returning.
        vector<int> arr;
        arr.push_back(lastLen);
        arr.push_back(lastWid);
        return arr;
    }
};