///////////////////////////////////////////////////////////////// SELECTION SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  selectionSortlist.h - Selection Sort for input type list
///////////////////////////////////////////////////////////////// SELECTION SORT

void selectionSortList(node *head){
    int len=length(head);
    for(int i=len;i>0;i--){
        int mini=posmax(head,i);
        swapNodes(head,mini,i);
    }
}
