/////////////////////////////////////////////////////////////// BUCKET SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  bucketSortarray.h - Bucket Sort for input type array
/////////////////////////////////////////////////////////////// BUCKET SORT

void bucketSortArray(int a[],int n)
{
    node* temp[1000];
    for(int i=0;i<1000;i++)
        temp[i]=createlist();

    for(int i=0;i<n;i++)
        addnode(temp[a[i]/10],a[i]);


    for(int i=0;i<1000;i++){

        insertionSortList(temp[i]);
       }
       int j=0;
    for(int i=0;i<1000;i++){

        node* cur=temp[i]->next;
        while(cur){
           // cout<<j<<" "<<i<<endl;
            a[j]=cur->data;
            cur=cur->next;
            j++;
        }
    }
}
