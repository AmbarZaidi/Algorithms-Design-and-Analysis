/////////////////////////////////////////////////////////////// INSERTION SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  insertionSortarray.h - Insertion Sort for input type array
/////////////////////////////////////////////////////////////// INSERTION SORT

void insertionSortArray(int a[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
