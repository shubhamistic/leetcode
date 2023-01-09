class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> strArr;
        for(int i=1 ; i<=n ; i++){
            if((i%3 == 0) && (i%5 == 0)){
                strArr.push_back("FizzBuzz");
            }
            else if(i%3 == 0){
                strArr.push_back("Fizz");
            }
            else if(i%5 == 0){
                strArr.push_back("Buzz");
            }
            else{
                // converting number to string.
                ostringstream str1;
                str1 <<  i;
                string s = str1.str();
                strArr.push_back(s);
            }
        }
        return strArr;
    }
};