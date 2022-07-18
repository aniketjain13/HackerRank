/************************************************************************
// SOLUTION HERE
************************************************************************/

int pageCount(int n, int p) {
    if(n == 2)
        return 0;
    if(n%2 == 0 && p == n-1)
        return 1;
    int pnfs = p / 2;
    int pnfe = (n - p) / 2;
    if(pnfs < pnfe)
        return pnfs;
    return pnfe;
}