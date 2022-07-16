/************************************************************************
// SOLUTION HERE
************************************************************************/

int migratoryBirds(vector<int> arr) {
    vector<int> help(6, 0);
    for(int32_t i = 0; i < arr.size(); i++){
        help[arr[i]]++;
    }
    int max = 0;
    for(int i = 1; i < 6; i++){
        if(max < help[i])
            max = help[i];
    }
    for(int i = 1; i < 6; i++){
        if(max == help[i])
            return i;
    }
    return 0;
}