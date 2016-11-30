#include <iostream>
#include <stdlib.h>
#include <sys/time.h>

using namespace std;

#include "utilities.h"
#include "linkedlist.h"

#include "insertionSortlist.h"
#include "selectionSortlist.h"
#include "bubblesortlist.h"
#include "shellSortlist.h"
#include "mergeSortlist.h"
//#include "quickSortlist.h"
//
#include "countingSortlist.h"
#include "radixSortlist.h"
#include "bucketSortlist.h"

#include "insertionSortarray.h"
#include "selectionSortarray.h"
#include "bubbleSortarray.h"
#include "shellSortarray.h"
#include "mergeSortarray.h"
#include "quickSortarray.h"
#include "countingSortarray.h"
#include "heapSortarray.h"
#include "radixSortarray.h"
#include "bucketSortarray.h"

int main()
{

    ///////////////////////////////////////////////// TESTING FOR LINKED LIST
    node* a=createlist();
    int n = 1000;
    for(int i=0;i<n;i++)
    {
        addnode(a,(rand()%200));
    }
    cout<<"Number of elements in array: "<<n<<"\n\n";
    printlist(a);

    struct timeval time1, time2;
    gettimeofday(&time1, NULL);

    //cout<<"\n\nUsing Insertion Sort: \n";   insertionSortList(a);
    //cout<<"\n\nUsing Selection Sort: \n";   selectionSortList(a);
    //cout<<"\n\nUsing Bubble Sort: \n";   bubbleSortList(a);
    //cout<<"\n\nUsing Shell Sort: \n";   shellSortList(a);
    //cout<<"\n\nUsing Merge Sort: \n";   mergeSortList(a);
    //cout<<"\n\nUsing Quick Sort: \n";   quickSortList(a);
    cout<<"\n\nUsing Heap Sort: \n";   bubbleSortList(a);
    //cout<<"\n\nUsing Counting Sort: \n";   countingSortList(a);
    //cout<<"\n\nUsing Radix Sort: \n";   radixSortList(a);
    //cout<<"\n\nUsing Bucket Sort: \n";   bucketSortList(a);
    printlist2(a);

///////////////////////////////////////////////// TESTING FOR ARRAY

//    int a[10000] ;
//    int n = 10000;
//    randomArray(a,n);
//    cout<<"Number of elements in array: "<<n<<"\n\n";
//    cout<<"Initial Array: \n";
//    print(a,n);
//
//
//    struct timeval time1, time2;
//    gettimeofday(&time1, NULL);
//
//    //cout<<"\n\nUsing Insertion Sort: \n";     insertionSortArray(a,n);
//    //cout<<"\n\nUsing Selection Sort: \n";     selectionSortArray(a,n);
//    //cout<<"\n\nUsing Bubble Sort: \n";        bubbleSortArray(a,n);
//    //cout<<"\n\nUsing Shell Sort: \n";         shellSortArray(a,n);
//    //cout<<"\n\nUsing Merge Sort: \n";         mergeSortArray(a,n);
//    //cout<<"\n\nUsing Quick Sort: \n";         quickSortArray(a,n);
//    //cout<<"\n\nUsing Heap Sort: \n";          heapSortArray(a,n);
//    //cout<<"\n\nUsing Counting Sort: \n";      countingSortArray(a,n);
//    //cout<<"\n\nUsing Radix Sort: \n";         radixSortArray(a,n);
//    //cout<<"\n\nUsing Bucket Sort: \n";        bucketSortArray(a,n);
//    print(a,n);

    gettimeofday(&time2, NULL);
    cout<<"\n\nTimeOfStart"<<": "<<time1.tv_sec;
    cout<<"\nTimeOfEnd"<<": "<<time2.tv_sec<<endl;
    long long int ms1 = time1.tv_sec * 1000 + time1.tv_usec/10000 ;
    long long int ms2 = time2.tv_sec * 1000 + time2.tv_usec/10000;
    cout<<"\nTimeTaken "<<(long long)(ms2-ms1)<<endl;
}
