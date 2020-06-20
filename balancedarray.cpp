#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n,i;
		cin>>n;
		int a[n];
		if(n%4!=0)
		cout<<"No"<<endl;
		else{
			cout<<"Yes"<<endl;
			a[0]=2;
			a[n/2]=1;
			for(i=1;i<n/2;i++){
				a[i]=a[i-1]+2;
			}
			for(i=n/2+1;i<n-1;i++){
				a[i]=a[i-1]+2;
			}
			a[n-1]=a[n/2-1]+n/2-1;
		
		for(i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
		t--;
	}
}


