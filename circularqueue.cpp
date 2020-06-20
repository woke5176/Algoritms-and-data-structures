#include<bits/stdc++.h>
using namespace std;
#define size 10
int a[10];
int front=-1;
int rear=-1;
bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}
void enqueue(int x){
	if((rear+1)%size==front){
		cout<<"sorry we are full"<<endl;
	}
	else {
		if(front==-1)
			front =0;
		
		rear=(rear+1)%size;
		a[rear]=x;
	}
}
	void showfront(){
	

 if( isempty())
 cout<<"Queue is empty\n";
 else
 cout<<"element at front is:"<<a[front];
}	

void dequeue(){
	if(isempty()){
		cout<<"empty";
	}
	else if(front==rear){
		front=rear=-1;
	}
	else {
		front=(front+1)%size;
			}
}
void display(){

 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  int i;
  if( front <= rear )
  {
   for( i=front ; i<= rear ; i++)
   cout<<a[i]<<" ";
  }
  else
  {
   i=front;
   while( i < size)
   {
   cout<<a[i]<<" ";
   i++;
   }
   i=0;
   while( i <= rear)
   {
   cout<<a[i]<<" ";
   i++;
   }
  }
 }
}
	
int main()
{
 int choice, flag=1, value;
 while( flag == 1)
 {
  cout<<"\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: showfront();
          break;
  case 4: display();
          break;
  case 5: flag = 0;
          break;
  }
 }
}
