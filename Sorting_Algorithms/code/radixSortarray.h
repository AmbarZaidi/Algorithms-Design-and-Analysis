///////////////////////////////////////////////////////////////// RADIX SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  radixSortarray.h - Radix Sort for input type array
///////////////////////////////////////////////////////////////// RADIX SORT

void radixSortArray(int* a,int n)
{
  int max = maxElem(a,n);
  int maxD = nDigits(max);

  node* buckets[10];
  for(int i=0;i<10;i++)
    buckets[i]=createlist();

  int k= 0;
  while(k<maxD)
  {
    for(int i=0;i<n;i++)
    {
      addnode(buckets[digit(a[i],k)],a[i]);
    }
    //printlist(buckets[2]);
    for(int i=0;i<10;i++)
    {
      //  cout<<length(buckets[i])<<" "<<i<<endl;
       // insertionSortList(buckets[i]);
    }
//cout<<1;
    int abcd=0;
    for(int i=0;i<10;i++)
    {
        node* temp=buckets[i]->next;
        //cout<<"\n"<<i<<" || ";
        while(temp)
        {
            a[abcd]=temp->data;
       //      cout<<temp->data<<", ";
            temp=temp->next;
            abcd++;
        }
    }//cout<<"\n";
 //   for(int i=0;i<n;i++)
 //   {
 //       cout<<" "<<a[i]<<" ";
 //   }
 //   cout<<'\n';
    for(int i=0;i<10;i++){
        buckets[i]->next=NULL;
    }
    k++;
  }
}

