#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct node{
	struct node* left;
	struct node* right;
	int data;
};
node* FindMin(node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
struct node* Delete(struct node* root,int data){
	if(root==NULL){
	return root;	
	}
	if(data<root->data)
	Delete(root->left,data);
	else if(data>root->data){
		Delete(root->right,data);
	}
	else{
		if(root->left==NULL && root->right==NULL){
			delete root;
			root=NULL;
		}
		else if(root->left==NULL){
			struct node* temp=root;
			root=root->left;
			delete temp;
		}
			else if(root->left==NULL){
			struct node* temp=root;
			root=root->right;
			delete temp;
		}
		else{
			struct node *temp1=FindMin(root->right);
			root->data=temp1->data;
			root->right=Delete(root->right,temp1->data);
		}
	}
	return root;
}

void Inorder(node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);      
	printf("%d ",root->data);  
	Inorder(root->right);      
}
node* Insert(node *root,char data) {
	if(root == NULL) {
		root = new node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main(){
	node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);

	
	root = Delete(root,5);


	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
}
