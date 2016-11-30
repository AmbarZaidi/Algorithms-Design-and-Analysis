/////////////////////////////////////////////////////////////// COUNTING SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  countingSortlist.h - Counting Sort for input type list
/////////////////////////////////////////////////////////////// COUNTING SORT

// assuming numbers are between 0 and 10000 both inclusive

void countingSortList(node* head){
    int temp[10001];
    for(int i=0;i<10001;i++)temp[i]=0;
    node* cur=head->next;
    while(cur){
        temp[cur->data]++;
        cur=cur->next;
    }
    cur=head->next;
    for(int i=0;i<10001;i++){
        while(temp[i]){
            cur->data=i;
            cur=cur->next;
            temp[i]--;
        }
    }
}
