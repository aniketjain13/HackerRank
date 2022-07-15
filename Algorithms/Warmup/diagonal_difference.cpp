/************************************************************************
// SOLUTION HERE
************************************************************************/

int diagonalDifference(vector<vector<int>> arr) {
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i][i];
    }
    for(int i = 0; i < arr.size(); i++){
        sum -= arr[i][arr.size()-i-1];
    }
    if (sum < 0) 
        return -1*sum;
    return sum;
}