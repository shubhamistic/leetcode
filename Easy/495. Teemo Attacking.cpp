class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int seconds = duration;
        for(int i=1 ; i < timeSeries.size() ; i++){
            if(timeSeries[i] - timeSeries[i-1] > duration){
                seconds += duration;
            }
            else{
                seconds += (timeSeries[i] - timeSeries[i-1]);
            }
        }
        return seconds;
    }
};