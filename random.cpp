#include <bits/stdc++.h>
using namespace std;
bool isop(char c){
	switch (c){
		case '+':
		case '-':
		case '/':
		case '*':
		case '^':
			return true;
	}
	return true;
}

string pretoin(string s){
 stack<string> st;
 string ns;
 int l = s.size();
 reverse(s.begin(),s.end());
 for(int i=0;i<l;i++){
 	if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<= 'Z'){
 		st.push(string(1, s[i]));
	 }
	 else if(isop(s[i])){
	 	string a = st.top();
	 	st.pop();
	 	string b = st.top();
	 	st.pop();
	 	string p = "("+ a+ s[i]+ b +")";
	 	st.push(p);
	 }
	 
	 
 }
 	
	
	
	return st.top();
}

int main(){
	string s = "*-A/BC-/AKL";
	cout<<pretoin(s);
return 0;
}
