/************************************************************************
// SOLUTION HERE
************************************************************************/
int pickingNumbers(vector<int> a) {
    map<int, int> m;
    for(int i = 0; i < a.size(); i++)
        m[a[i]]++;
    vector<pair<int, int>> b;
    for(auto i : m)
        b.push_back(i);
    if(b.size() <= 1)
        return a.size();
    int max = -1, currmax = -1;
    for(int i = 0; i < b.size() - 1; i++){
        if(b[i].first + 1 == b[i+1].first)
        {   if(max < b[i].second + b[i+1].second)
                max = b[i].second + b[i+1].second; }
        else{ 
            if(max < b[i].second)
                max = b[i].second;  }
        if(currmax < max)
            currmax = max;
    }
    return currmax;
}
