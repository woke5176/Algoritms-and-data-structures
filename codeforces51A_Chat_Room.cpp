#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string v="hello";
	int i,j=0,z=0;
	for(i=0;i<s.size();i++){
		if(s[i]==v[j]){
		
			
			j++;
			z++;
			if(z==5)
			break;
		}
		
		}
		if(z==5){
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}

