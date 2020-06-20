#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node* link;
	int data;
};
struct node* top=NULL;
void push(int x){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=top;
	top=temp;
	}
	void pop(){
		if(top==NULL){
			printf("Nothing to delete");
			return;
			}
		else{
		
		struct node* temp;
		temp=top;
		top=top->link;
		free(temp);
	}
}
	void Top(){
		printf("%d \n",top->data); 
	}
	int isEmpty(){
   if(top==NULL){
   
printf("Yes");
}
printf("No");
		}

 void print(){	struct node* temp;
       temp=top;
	printf("stack :");
	
	while(temp!=NULL){
		printf(" %d",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
int main(){
	push(1);print();
		push(11);print();
			push(111);print();
				push(1111);print();
					push(11111);print();
					pop();print();
					push(111110);print();
					Top();
					isEmpty();
					
}
	
