/************************************************************************
// SOLUTION HERE
************************************************************************/
vector<int> breakingRecords(vector<int> scores) {
    int min, max;
    vector<int> result(2, 0);
    min = scores[0];
    max = scores[0];
    for(int i = 1; i < scores.size(); i++){
        if(min > scores[i]){
            min = scores[i];
            result[1]++;
        }
        if(max < scores[i]){
            max = scores[i];
            result[0]++;
        }
    }
    return result;
}
