class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> twoDimArr;
        for(int i=1 ; i<=numRows ; i++){
            vector<int> singDimArr;
            for(int j=0 ; j<i ; j++){
                if(j == 0){
                    singDimArr.push_back(1);
                }
                else if(j == (i-1)){
                    singDimArr.push_back(1);
                }
                else{
                    singDimArr.push_back(twoDimArr[i-2][j] + twoDimArr[i-2][j-1]);
                }
            }
            twoDimArr.push_back(singDimArr);
        }
        return twoDimArr;
    }
};