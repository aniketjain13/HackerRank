/************************************************************************
// SOLUTION HERE
************************************************************************/

int getTotalX(vector<int> a, vector<int> b) {
    linkedlist l1;
    for(int i = 1; i <= b[0]; i++){
        if(b[0] % i == 0){
            l1.insert(i);
        }
    }
    for(int i  = 1; i < b.size(); i++){
        int p = 1;
        node *n;
        n=l1.first;
        while(n != NULL){
            if(b[i] % n->data != 0){
                n = n->next;
                l1.del(p);
            }
            else{
                n = n->next;
                p++;
            }
        }
    }
    for(int i = 0; i < a.size(); i++){
        int p = 1;
        node *n;
        n=l1.first;
        while(n != NULL){
            if(n->data % a[i] != 0){
                n = n->next;
                l1.del(p);
            }
            else{
                n = n->next;
                p++;
            }
        }
    }
    return l1.node_count();
}
