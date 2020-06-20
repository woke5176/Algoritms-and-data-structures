#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#include<stack>
bool Isdigit(char C) ;
int Postfixeval(string expression);
bool Isoperand(char C);
int operation(char operation, int operand1, int operand2);

int Postfixeval(string expression){
	stack<char> s;
	for(int i=0;i<expression.length();i++){
		if(Isoperand(expression[i])){
			int operand2=s.top();s.pop();
			int operand1=s.top();s.pop();
			int result=operation(operand2,operand1,expression[i]);
		}
		else if(expression[i]==' '|| expression[i]==','){
			continue;
		}
		else if(Isdigit(expression[i])){
			int operand=0;
			while(i<expression.length()||Isdigit(expression[i])){
				 operand=operand*10+(expression[i]-'0');
				i++;
			}
			i--;
			s.push(operand);
		}
	}
	return s.top();
}
bool Isdigit(char C) 
{
	if(C >= '0' && C <= '9') return true;
	return false;
}
bool Isoperand(char C)
{
	if(C == '+' || C == '-' || C == '*' || C == '/')
		return true;

	return false;
}
int operation(char operation, int operand1, int operand2)
{
	if(operation == '+') return operand1 +operand2;
	else if(operation == '-') return operand1 - operand2;
	else if(operation == '*') return operand1 * operand2;
	else if(operation == '/') return operand1 / operand2;

	else cout<<"Unexpected Error \n";
	return -1; 
}
int main() 
{
	string expression; 
	cout<<"Enter Postfix Expression \n";
	getline(cin,expression);
	int result = Postfixeval(expression);
	cout<<"Output = "<<result<<"\n";
}
