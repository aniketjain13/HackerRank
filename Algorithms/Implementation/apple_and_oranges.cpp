/************************************************************************
// SOLUTION HERE
************************************************************************/
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int count = 0;
    for(int i = 0; i < apples.size(); i++){
        if(apples[i] + a >= s  && apples[i] + a <= t)
            count++;
    }   
    cout << count << "\n";
    count = 0;
    for(int i = 0; i < oranges.size(); i++){
        if(oranges[i] + b >= s  && oranges[i] + b <= t)
            count++;
    }   
    cout << count << "\n";
    
}
