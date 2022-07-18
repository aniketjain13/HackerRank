/************************************************************************
// SOLUTION HERE
************************************************************************/

int sockMerchant(int n, vector<int> ar) {
    map<int, int> m;
    for(int i = 0; i < n; i++){
        m[ar[i]]++;
    }
    int count = 0;
    for(auto i : m){
        count += int(i.second / 2);
    }
    return count;
}