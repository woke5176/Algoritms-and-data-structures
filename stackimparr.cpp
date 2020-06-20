#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;
void Push(int x){
	if(top==MAX_SIZE -1){
		printf("Stack Overflow");
		return;
	}
	A[++top]=x;
	}
	void pop(){
		if(top==-1){
			printf("Stack's empty dude'");
			return;
		}
		top--;
		
	}
	int Top(){
		return A[top];
	}
	void print(){
		printf("Stack: ");
		for(int i=0;i<=top;i++){
			printf("%d ",A[i]);
		}
		printf("\n");
	}
	int main(){
		Push(5); print();
		Push(15); print();
		Push(25); print();
		Push(35); print();
		pop(); print();
		Push(45); print();
		Top();
		
	}
