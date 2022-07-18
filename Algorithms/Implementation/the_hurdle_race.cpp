/************************************************************************
// SOLUTION HERE
************************************************************************/

int hurdleRace(int k, vector<int> height) {
    int max = -1;
    for(int i = 0; i < height.size(); i++)
        if(max < height[i])
            max = height[i];
    if(k > max)
        return 0;
    return max - k;
}