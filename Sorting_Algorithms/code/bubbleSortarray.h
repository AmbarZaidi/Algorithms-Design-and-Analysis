///////////////////////////////////////////////////////////////// BUBBLE SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  bubbleSortarray.h - Bubble Sort for input type array
///////////////////////////////////////////////////////////////// BUBBLE SORT

void bubbleSortArray(int a[],int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
