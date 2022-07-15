/************************************************************************
// SOLUTION HERE
************************************************************************/

int birthdayCakeCandles(vector<int> candles) {
    int64_t max = INT64_MIN;
    int total = 0;
    for(int i = 0; i < candles.size(); i++){
        if(max < candles[i]){
            max = candles[i];
            total = 1;
        }
        else if(max == candles[i])
            total++;
    }
    return total;
} 