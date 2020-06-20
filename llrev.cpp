#include <stdio.h>
#include<stdlib.h>
struct node{
    struct node* next;
    int data;
    
};
struct node* head;
void insert(int data,int n){
    struct node* temp2=(struct node*)malloc(sizeof(struct node*));
    temp2->data=data;
    temp2->next=NULL;
    if(n==1){
        temp2->next=head;
        head=temp2;
        return;
    }
    struct node* temp=head;
    for( int i=0;i<n-2;i++){
        temp=temp->next;
    }
    temp2->next=temp->next;
    temp->next=temp2;
}
void reverse(){
    struct node* curr;
    struct node* prev;
    struct node* next;
    curr=head;
    prev=NULL;
    
    while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    }
    head=prev;
}
void print(){
    struct node* temp3=head;
    while(temp3!=NULL){
        printf("%d\n",temp3->data);
        temp3=temp3->next;
    }printf("\n");
}
int main(void) {
head=NULL;
insert(2,1);
insert(4,2);
insert(8,1);
insert(12,3);
insert(22,2);
print();
    reverse();
    print();

return 0;
}

