/////////////////////////////////////////////////////////////// BUCKET SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  bucketSortlist.h - Bucket Sort for input type list
/////////////////////////////////////////////////////////////// BUCKET SORT

//assume numbers are between 0 and 10000 both inclusive

void bucketSortList(node* head){
    node* a[1000];
    for(int i=0;i<1000;i++)a[i]=createlist();
    //cout<<1<<endl;
    node* cur=head->next;
    while(cur){
        addnode(a[(cur->data)/10],cur->data);
        cur=cur->next;
    }
    //cout<<2<<endl;
    for(int i=0;i<1000;i++){
      //  cout<<i<<endl;
            insertionSortList(a[i]);
    }
    node* temp2=head->next;
    for(int i=0;i<1000;i++){
        node* temp=a[i]->next;
        while(temp){
            temp2->data=temp->data;
            temp=temp->next;
            temp2=temp2->next;
        }
    }
}
