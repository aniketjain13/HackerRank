/************************************************************************
// SOLUTION HERE
************************************************************************/

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    
    int max = -1;
    for(int i = 0; i < keyboards.size(); i++){
        for(int j = 0; j < drives.size(); j++){
            int a = keyboards[i] + drives[j];
            if(a <= b){
                if(max < a)
                    max = a;    
            }
        }    
    }
    return max;
}