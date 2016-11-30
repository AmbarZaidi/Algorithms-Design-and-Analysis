/////////////////////////////////////////////////////////////// INSERTION SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  insertionSortlist.h - Insertion Sort for input type list
/////////////////////////////////////////////////////////////// INSERTION SORT

void insertionSortList(node* head){
    int len=length(head);
    if(len==0)return ;
    if(len==1)return ;
    node* cur=head->next->next;
    for(int i=2;i<=len;i++){
        int xyz=cur->data;
        node* temp=head->next;
        int posi=1;
        while(xyz>temp->data ){
            temp=temp->next;
            posi++;
            if(posi>=i)break;
        }

        xyz=1;
        temp=head;
        while(xyz<posi){
            temp=temp->next;
            xyz++;
        }
        xyz=cur->data;
        deleteNode(head,i);
        node* abcd=  (node*)malloc(sizeof(node));
        abcd->data=xyz;
        abcd->next=temp->next;
        temp->next=abcd;

        cur=cur->next;
        //printlist(head);
    }
}
