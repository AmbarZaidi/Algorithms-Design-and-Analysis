#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
      int data;
      node *next;

};


void initnode(node *head,int n){
	head->data = n;
	head->next =NULL;
}

void addnode(node *head,int n ){

    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=n;
    temp->next=NULL;
    if(head==NULL){
            //cout<<"here"<<endl;
        head=temp;
        //cout<<head->data;
        return ;
    }
    node *cur = head;
    while(cur){
        if(cur->next==NULL){
            cur->next=temp;
            return ;
        }
        cur=cur->next;

    }

}

void printlist(node *head){
    node* cur=head->next;
    cout<<"The current linked list is : \n";

    cout<<cur->data;
    while(cur->next){
        cout<<" --> "<<cur->data;
        cur=cur->next;
    }
    cout<<endl;

}
void printlist2(node *head){
    node* cur=head->next;
//    cout<<"The final linked list is : \n";

    cout<<cur->data;
    while(cur->next){
        cout<<" --> "<<cur->data;
        cur=cur->next;
    }
    cout<<endl;


}
void deleteNode(node *head,int pos){
    if(pos==1){
        node* temp=head->next->next;
        head->next=temp;
        return ;
    }
    pos-=2;
    node *cur=head->next;
    while(pos){
        cur=cur->next;
        pos--;
    }
    node* temp=cur->next->next;
    cur->next=temp;
    return ;
}

int length(node* head){
    int temp=0;
    node* cur=head->next;
    while(cur){
        temp++;
        cur=cur->next;
    }
    return temp;
    }


void swapNodes(node* head,int i,int j){
    node* cur=head->next;
    int temp=1;
    node* inode=(node*)malloc(sizeof(node));
    node* jnode=(node*)malloc(sizeof(node));
    while(cur){
        if(temp==i)inode=cur;
        if(temp==j)jnode=cur;
        temp++;
        cur=cur->next;
    }
    int xyz=inode->data;
    inode->data=jnode->data;
    jnode->data=xyz;
}

int posmax(node* head,int last){
    node* cur=head->next;
    int maxi=cur->data;
    int posi=1;
    int temp=1;
    while(cur && temp<=last){
        if(cur->data > maxi){
            maxi=cur->data;
            posi=temp;
        }
        cur=cur->next;
        temp++;
    }
    return posi;
}

node* findend (node* head){
    node* cur=head->next;
    while(cur->next){
        cur=cur->next;
    }
    return cur;
}
node* createlist(){
    node* a=(node*)malloc(sizeof(node));
   initnode(a,-1);
    return a;
    }


