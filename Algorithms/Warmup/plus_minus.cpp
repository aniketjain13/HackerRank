/************************************************************************
// SOLUTION HERE
************************************************************************/

void plusMinus(vector<int> arr) {
    double pos = 0;
    double neg = 0;
    double zero = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }
    
    cout<<setprecision(6)<<pos/arr.size()<<"\n";
    cout<<setprecision(6)<<neg/arr.size()<<"\n";
    cout<<setprecision(6)<<zero/arr.size()<<"\n";
}
