/************************************************************************
// SOLUTION HERE
************************************************************************/
void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i < bill.size(); i++){
        if(i != k)
            sum += bill[i];
    }
    if(sum/2 == b)
        cout << "Bon Appetit\n";
    else
    cout << b - sum/2 << endl;
}
