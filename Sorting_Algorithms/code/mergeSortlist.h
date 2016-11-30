///////////////////////////////////////////////////////////////// MERGE SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  mergeSortlist.h - Merge Sort for input type list
///////////////////////////////////////////////////////////////// MERGE SORT

node* mergingToLinkedList(node* head1, node* head2){
    node* ans= NULL;
    if (head1==NULL)
        return head2;
    else if (head2==NULL)
        return head1;
    if (head1->data <= head2->data){
        ans= head1;
        ans->next= mergingToLinkedList(head1->next, head2);
    }else{
        ans= head2;
        ans->next= mergingToLinkedList(head1, head2->next);
    }
    return ans;
}
void split(node* head, node** start, node** ending){
    node* temp1;
    node* temp2;
    if (head==NULL||head->next==NULL){
        *start = head;
        *ending = NULL;
    }
    else{
        temp2 = head;
        temp1 = head->next;
        while (temp1 != NULL){
            temp1 = temp1->next;
            if (temp1!=NULL){
                temp2= temp2->next;
                temp1= temp1->next;
            }
        }
        *start= head;
        *ending= temp2->next;
        temp2->next= NULL;
    }
}
void MergeSortl( node** heading){
    node* head= *heading;
    node* temp1;node* temp2;
    if ((head==NULL)||(head->next==NULL))return;
    split(head,&temp1,&temp2);
    MergeSortl(&temp1);
    MergeSortl(&temp2);
    *heading= mergingToLinkedList(temp1,temp2);
}
void mergeSortList(node* head){
    int l=length(head);
    if(l==0||l==1)return ;
    MergeSortl(&(head->next));
}
