///////////////////////////////////////////////////////////////// HEAP SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  heapSortarray.h - Heap Sort for input type array
///////////////////////////////////////////////////////////////// HEAP SORT
int leftChild(int m)
{
    return 2*m+1;
}
int rightChild(int m)
{
    return 2*m+2;
}
void maxHeapify(int* a, int n, int index)
{
    int l = leftChild(index);
    int r = rightChild(index);
    int largest;

    if(l<=n && a[l]>a[index]){largest=l;}
    else{largest=index; }
    if(r<=n && a[r]>a[largest]){largest=r;}

    if(largest!=index)
    {
        //cout<<a[largest]<<","<<a[index]<<" __"<<largest<<","<<index<<"\n";
        swap(a[largest],a[index]);
        maxHeapify(a, n, largest);
    }
}
void MaxHeap(int* a, int n)
{
    for(int i= n/2; i>=0;i-- )
    {
        maxHeapify(a,n,i);
    }
}
void heapSortArray(int* a,int n)
{
    n--;
    MaxHeap(a, n);
    for(int i=n-1; i>=0; i--)
    {
        swap(a[0],a[i+1]);
        MaxHeap(a,i);
        //println(a,7);
    }
}
