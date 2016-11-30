///////////////////////////////////////////////////////////////// BUBBLE SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  bubbleSortlist.h - Bubble Sort for input type list
///////////////////////////////////////////////////////////////// BUBBLE SORT

void bubbleSortList(node * head){
    int len=length(head);
    if(len==1)return ;
    node* cur=head->next;
//    node* next1=cur->next;
    for(int i=len-1;i>0;i--){
        node* cur=head->next;
        node* next1=cur->next;
        int temp=1;
        while(temp<=i){
            if(cur->data > next1->data ){
                int xyz=cur->data;
                cur->data=next1->data;
                next1->data=xyz;
            }
            temp++;
            cur=cur->next;
            next1=next1->next;
        }
    }
}
