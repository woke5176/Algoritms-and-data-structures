#include<stdio.h>
using namespace std;
#include<stdlib.h>
#include <bits/stdc++.h> 
#include<stack>
bool popable(char opening,char closing){
	if(opening=='('&&closing==')')
	return true;
  else if(opening=='{'&&closing=='}')
	return true;
   else if(opening=='['&&closing==']')
	return true;
	return false;
}
bool balanced(string exp){
	stack<char> s;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='(' || exp[i]=='{'||exp[i]=='[')
		s.push(exp[i]);
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
			if(s.empty() || !popable(s.top(),exp[i]))
			return false;
			else 
			s.pop();
			
		}
			
		}
		return s.empty() ? true:false;
	}
	int main(){
		string expression;
	cout<<"Enter an expression:  "; 
	cin>>expression;
	if(balanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
	}


