/************************************************************************
// SOLUTION HERE
************************************************************************/

string angryProfessor(int k, vector<int> a) {
    int cnt = 0;
    for(int i = 0; i < a.size(); i++)
        if(a[i] < 1)
            cnt++;
    if(cnt < k)
        return "YES";
    return "NO";
}