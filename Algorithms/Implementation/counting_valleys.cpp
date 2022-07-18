/************************************************************************
// SOLUTION HERE
************************************************************************/

int countingValleys(int steps, string path) {
    int cntv = 0;
    int vt = 0;
    int sl = 0;
    for(int i = 0; i < steps; i++){
        if(path[i] == 'U')
            sl++;
        else 
            sl--;
        if(sl < 0) vt = 1;
        else if(sl == 0 && vt == 1) cntv++;
        else vt = 0;
    }
    return cntv;
}