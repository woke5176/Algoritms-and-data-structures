#include<stdio.h>
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

void  Delete(int v){
	
struct node* temp1=head;
if(v==1){
	head=temp1->next;
	free(temp1);
	return;
}
for(int i=0;i<v-2;i++){
	temp1=temp1->next;
}
struct node* temp2;
temp2=temp1->next;
temp1->next=temp2->next;
free(temp2); 
}
 void print() 
    { 
        struct node* temp = head; 
        while (temp != NULL) { 
            printf(" %d \n",temp->data);
            temp = temp->next; 
        } 
    } 
int main(){
		head=NULL;
    	insert(2,1);
    	insert(12,2);
    	insert(22,2);
    	insert(222,3);
    	insert(111,4);
    	print();
    	int v;
    	printf("Enter the desired position \n");
    	scanf("%d",&v);
    	Delete(v);
    	print();
    }
    	
    
