#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
struct node* insert(struct node* head,int data){
	struct node* temp= (struct node*)malloc(sizeof(struct node*));
	temp->data=data;
	temp->next=NULL;
	if(head==NULL){
		
		head=temp;
	}
	else {
		struct node* temp1;
		temp1=head;
		while(temp1->next!=NULL){
			temp1=temp1->next;
		}
		temp1->next=temp;
	}	 
	return head;
	
}
 void print() 
    { 
        struct Node* temp = head; 
        while (temp != NULL) { 
            printf("%d",temp->data);
            temp = temp->next; 
        } 
    } 
void revprint(struct node* p){
	
	if(p==NULL){
		printf("\n");
		return;
	}
	revprint(p->next);
	printf(" %d",p->data);
}
int main(){
	struct node* head;
	head=NULL;
	head=insert(head,1);
	head=insert(head,2);
	head=insert(head,3);
	head=insert(head,4);
	    revprint(head);
	    print();
		
}
