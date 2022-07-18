/************************************************************************
// SOLUTION HERE
************************************************************************/
int designerPdfViewer(vector<int> h, string word) {
    int cnt = word.size();
    int max = -1;
    for(int i = 0; i < cnt; i++){
        if(max < h[int(word[i] - 97)])
            max = h[int(word[i] - 97)];
    }
    return max * cnt;
}
