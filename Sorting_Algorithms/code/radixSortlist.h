///////////////////////////////////////////////////////////////// RADIX SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  radixSortlist.h - Radix Sort for input type list
///////////////////////////////////////////////////////////////// RADIX SORT

void radixSortList(node* head)
{
  //  printlist(head);
  node* cur=head->next;
  int max=cur->data;
  while(cur){
    if(max < cur->data)max=cur->data;
    cur=cur->next;
  }
  int maxD = nDigits(max);

  node* buckets[10];
  for(int i=0;i<10;i++)
    buckets[i]=createlist();

   // cout<<max<<" "<<maxD<<" pppp "<<digit(999,2)<<"\n";
  int k= 0;
  while(k<maxD)
  {
       //cout<<" "<<k<<" pppp \n";

    node* cur=head->next;
    while(cur){
        //cout<<cur->data<<" "<<digit(cur->data,k)<<", ";
        addnode(buckets[digit(cur->data,k)],cur->data);
        cur=cur->next;
    }

    cur=head->next;
    for(int i=0;i<10;i++)
    {
        node* temp=buckets[i]->next;
        //cout<<"\n"<<i<<" || ";
        while(temp)
        {
            cur->data=temp->data;
            // cout<<temp->data<<", ";
            temp=temp->next;
            cur=cur->next;
        }
    }//cout<<"\n";
    //printlist(head);
    //cout<<'\n';
    for(int i=0;i<10;i++){
        buckets[i]->next=NULL;
    }
    k++;
  }
}

