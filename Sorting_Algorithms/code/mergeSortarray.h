///////////////////////////////////////////////////////////////// MERGE SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  mergeSortarray.h - Merge Sort for input type array
///////////////////////////////////////////////////////////////// MERGE SORT

void mergeSort(int a[],int start,int ending){
    //cout<<start<<" "<<ending<<endl;
    if(start>=ending)return ;
    int mid=(start+ending)/2;
    mergeSort(a,start,mid);
    mergeSort(a,mid + 1,ending);
        //cout<<start<<" "<<mid<<" "<<ending<<endl;
    int temp1=start;
    int temp2=mid+1;
    int temp3=start;
    int c[10000];
    while(temp1<=mid && temp2<=ending){
        if(a[temp1]<a[temp2]){
            c[temp3]=a[temp1];
            temp1++;
            temp3++;
          //  cout<<1<<endl;

        }
        else {
            c[temp3]=a[temp2];
            temp2++;
            temp3++;
            //cout<<2<<endl;
        }

    }
    while(true){

        if(temp1==mid+1)break;
        //cout<<3<<endl;
        c[temp3]=a[temp1];
        temp3++;
        temp1++;
    }
    while(true){
        if(temp2==ending+1)break;
        c[temp3]=a[temp2];
        temp2++;
        temp3++;
    }

    for(int i=start;i<=ending;i++)a[i]=c[i];

}


void mergeSortArray(int a[],int n){
    mergeSort(a,0,n-1);
}
