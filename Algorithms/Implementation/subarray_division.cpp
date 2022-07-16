/************************************************************************
// SOLUTION HERE
************************************************************************/

int birthday(vector<int> s, int d, int m) {
    int sum;
    int count = 0;
    for(int i = 0; i <= s.size()-m; i++){
        sum = 0;
        for(int j = i; j < i+m; j++){
            sum += s[j];
        }
        if(sum == d)
            count++;
    }
    return count;
}
