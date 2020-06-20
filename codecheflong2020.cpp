#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	ll ts;
	cin>>ts;
	ll js=0;
	if(ts%2!=0){
	    js=ts/2;
	}
	else{
	while(ts%2==0){
		ts=ts/2;
	}
	js=(ts)/2;
	}	
	cout<<js<<endl;
	}
	
}


