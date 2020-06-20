#include <stdio.h>
#include<stdlib.h>
struct node{
	struct node* next;
	int data;
};
struct node* head;
 void printmiddle(){
    int count=0;
	struct node* temp;
	while(temp!=NULL){
		count++;
	}
	temp=head;
	
	if (count%2==0){
		count=count/2;
		for(int i=0;i<count;i++){
			temp=temp->next;
}
  printf("%d",temp->data);
	}

 else {
	count=count/2+1;
	for(int i=0;i<count;i++){
		temp=temp->next;
	}
	printf("%d",temp->data);
}
}
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
void print() 
    { 
        struct node* temp = head; 
        while (temp != NULL) { 
            printf(" %d",temp->data);
            temp = temp->next; 
        } 
    } 
    int main() {
head=NULL;
insert(2,1);
insert(4,2);
insert(8,1);
insert(12,3);
insert(22,2);
print();
printmiddle();
   
return 0;
}
