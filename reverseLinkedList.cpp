//This is C++ program to reverse a Linked List

#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node{
  int data;
  struct Node *next;
}*first=NULL;

void create(int A[],int n){
   int i;
   struct Node*t,*last;
   first = new Node;
   first -> data = A[0];
   first->next=NULL;
   last = first;

   for(i=1;i<n;i++){
    t = (struct Node*) malloc (sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
   }

}

void display(struct Node * p){
    while(p!=NULL){
        cout<<p->data<<"  ";
        p=p->next;
    }
}
void reverseLL(Node *p){
    int *A;
    Node *q=p;
    int i=0;
    A= (int*) malloc (sizeof(int)*length(p));
    
    while(q){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q){
        q->data=A[i--];
        q=q->next;
        //i--;
    }

}

int main(){
  int A[]={10,20,30,40,5};
     create(A,5);
     reverseLL(NULL,first);
     display(first);
}
