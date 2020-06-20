
#include<iostream>
using namespace std;
#include<bits/stdc++.h> 

struct node{
	struct node* next;
	int data;
};
struct node* head;
void push(struct node* ptr,int data){
struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=head;
head=newnode;
}
void reverse(){
	stack<struct node*> s;
	struct node* temp=head;
	while(temp!=NULL){
		s.push(temp);
		temp=temp->next;
		}
	temp=s.top();
		head=temp;
		while(!s.empty())
		{
			temp->next=s.top();
			s.pop();
			temp=temp->next;
		}
		temp->next=NULL;
		
}
void print() 
    { 
        struct node* temp = head; 
        while (temp != NULL) { 
            printf(" %d",temp->data);
            temp = temp->next; 
        } 
        printf("\n");
    }
        int main(){
        	head=NULL;
        	push(head,1);
        	push(head,11);
        	push(head,111);
        	push(head,1111);
        	push(head,11111);
        	push(head,111111);
        	print();
        	reverse();
        	print();
        	
		}

