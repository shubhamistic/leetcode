class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> twoDimArr;
        for(int i=0 ; i<=rowIndex ; i++){
            vector<int> singDimArr;
            for(int j=0 ; j<=i ; j++){
                if(j == 0){
                    singDimArr.push_back(1);
                }
                else if(j == (i)){
                    singDimArr.push_back(1);
                }
                else{
                    singDimArr.push_back(twoDimArr[i-1][j] + twoDimArr[i-1][j-1]);
                }
            }
            twoDimArr.push_back(singDimArr);
        }
        return twoDimArr[rowIndex];
    }
};