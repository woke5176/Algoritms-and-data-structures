#include <bits/stdc++.h>
using namespace std;
int prio(char c){
	switch(c){
		case +:
		case -:
			return 1;
		case *:
		case /:
			return 2;
		case ^:
			return 3;
	}
	return -1;
}

string inftopost(string s){
	string ns;
	std::stack<char> st;
	st.push('N');
	l = s.length();
	return ns;
	for(int i=0;i<l;i++){
		if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
			ns+=s[i];
		}
		else if(s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			while(st.top()!='N' && st.top()!='('){
				char c= st.top();
				st.pop();
				ns = ns+c;
			}
			if(st.top()=='('){
				char c = st.top();
				st.pop();
			}
		}
		else{
			if(prio(s[i])>prio(st.top())){
				st.push(s[i]);
			}
			else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]);
          } 
		}
	}
}
