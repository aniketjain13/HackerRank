/************************************************************************
// SOLUTION HERE
************************************************************************/
void miniMaxSum(vector<int> arr) {
    int64_t sum = 0;
    int64_t max = INT64_MIN;
    int64_t min = INT64_MAX;
    for(int i = 0; i < arr.size(); i++){
        sum+=arr[i];
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    cout << sum-max << " " << sum-min; 
}
