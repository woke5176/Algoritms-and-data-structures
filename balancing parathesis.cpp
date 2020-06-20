#include <bits/stdc++.h>
using namespace std;
bool match(string p){
stack<char> st;
int l = p.length();
char s;
for(int i=0;i<l;i++){
	if(p[i]=='(' || p[i]=='{' || p[i]=='[')
	st.push(p[i]);
	if(p[i]==')' || p[i]=='}' || p[i]==']'){
		if(st.empty())
		return false;
		else{
			
		switch(p[i]){
			case ')':
				 s = st.top();
				st.pop();
				if(s=='[' || s=='{')
				return false;
				break;
				
			case ']':
				 s = st.top();
				st.pop();
				if(s=='(' || s=='{')
				return false;
				break;
				
			case '}':
				 s =st.top();
				st.pop();
				if(s=='[' || s== '(')
				return false;
				break;
				
		}
	       }
	}
}
return (st.empty());
}

int main(){
	string s;
	getline(cin,s);
	bool x = match(s);
	if(x==true){
		cout<<"balanced";
	}
	else
	cout<<"not balanced";
	
}
