
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
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
  
void reverse(struct node* p){
	if(p->next==NULL){
		head=p;
		return;
	}
	reverse(p->next);
	struct node* q;
	q=p->next;
	q->next=p;
	p->next=NULL;
	}
	 void print() 
    { 
        struct node* temp = head; 
        while (temp != NULL) { 
            printf(" %d",temp->data);
            temp = temp->next; 
        } 
    } 
    int main(){
    	
    	head=NULL;
    	insert(2,1);
    	insert(12,2);
    	insert(22,3);
    	insert(222,4);
    	insert(212,1);
    	reverse(head);
    	print();
}
    	
	
