#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count=1;
	int i;
	for(i=1;i<s.size();i++)
	{
		if(s[i]==s[i-1]){
			count+=1;
			if(count==7){
			
	        cout<<"YES"<<endl;
	        return 0;
	    }
	
		}
		else {
		
		count==1;}
	}
	
		
	cout<<"NO"<<endl;
	return 0;
}
