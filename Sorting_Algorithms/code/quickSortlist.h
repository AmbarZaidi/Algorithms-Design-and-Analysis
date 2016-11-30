//////////////////////////////////////////////////////////////// QUICK SORT
//  Group 18 - 14114009_14114006 - Ambar Zaidi & Akshit Kalra
//  Date: February 7,2016
//  quicksortlist.h - Quick Sort for input type list
//////////////////////////////////////////////////////////////// QUICK SORT

node* split(node* a1, node* r, node*& idx)
{
    node* idx2 = a1;
    idx = NULL;
    int Pivot = r->data;
    node* cur =a1;
        //cout<<Pivot<<endl;
        while(cur!=r && cur)
        {
            if (cur->data <= Pivot)
            {
                if (cur != idx2)
                {
                    swap(cur, idx2);
                }
            idx = idx2;
            idx2 = idx2->next;
            }
            //cout<<idx->data<<endl;
            //cout<<idx2->data<<endl;
            cur = cur->next;
        }
    if (idx2 != r)
        {
            swap1(idx2, r);
        }
        //cout<<idx2<<endl
    return idx2;

}

void quicksort(node* a1, node* r)
{
    if (a1==NULL||r== NULL)return;
    if (a1==r)return;
    node* idx= NULL;
    node* idx2= split(a1, r, idx);
    //cout<<idx2<<endl;
    quicksort(a1, idx);
    if (idx2 != r){ quicksort(idx2->next, r);  }
}
void quick_sort(node* head)
{
    if (head == NULL) return;
    node* r = head;
    while (r->next)
    {
        r = r->next;
    }
    quicksort(head, r);
}
