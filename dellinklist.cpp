#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node* next;
	int data;
};
struct node* head;
 void insert(int data,int v){
    struct node* temp2=(struct node*)malloc(sizeof(struct node*));
    temp2->data=data;
    temp2->next=NULL;
    if(v=1){
        temp2->next=head;
        head=temp2;
        return;
    }
    struct node* temp=head;
    for( int i=0;i<v-2;i++){
        temp=temp->next;
    }
    temp2->next=temp->next;
    temp->next=temp2;
}

void  Delete(int n){
if(head=NULL){
	printf("Null");
}	
struct node* temp1;
temp1=head;

if(n==1){
	head=temp1->next;
	free(temp1);
}
for(int i=0;i<n-2;i++){
	temp1=temp1->next;
}
struct node* temp2;
temp2=temp1->next;
temp1->next=temp2->next;
free(temp2); 
}
void print(){
	struct node* temp=head;
	if(temp!=NULL){
		printf(" %d \n",temp->data);
	}
}
int main(){
		head=NULL;
    	insert(2,1);
    	insert(12,2);
    	insert(22,3);
    	insert(222,4);
    	
    	print();
    	int n;
    	printf("enter the desired position \n");
    	scanf("%d",&n);
    	Delete(n);
    	print();
    }
    	

