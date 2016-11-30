///////////////////////////////////////////////////////////////// SHELL SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  shellSortlist.h - Shell Sort for input type list
///////////////////////////////////////////////////////////////// SHELL SORT

void insertionGapSort(node* head,int n,int gap){
    node** abc=new node*[gap];
    for(int i=0;i<gap;i++)abc[i]=createlist();
    node* cur=head->next;
    int i=0;
    while(cur){
        addnode(abc[i%gap],cur->data);
        cur=cur->next;
        i++;
    }
    for(int i=0;i<gap;i++){
        insertionSortList(abc[i]);
    }
    cur=head->next;
    for(int i=0;i<gap;i++){
        node* temp=abc[i]->next;
        while(temp){
            cur->data=temp->data;
            cur=cur->next;
            temp=temp->next;
        }
    }

}
void shellSortList(node* a)
{   int n=length(a);
	int gap = 1;
	while(gap<=n/3)
	{
		gap=gap*3+1;
	}
	while(gap>=1)
	{
		insertionGapSort(a,n,gap);
		gap=gap/2;
		//println(a,n);
	}
}
