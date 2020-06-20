#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
	int i,x=0,n,coc_max=0,coc=0,coc_min=10000;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++){
		if(abs(a[i-1]-a[i])<=2){
			coc++;
		}
		else{
			x++;
			if(coc_max<coc){
				coc_max=coc;
			}
			if(coc_min>coc){
				coc_min=coc;
			}
			coc=0;
			continue;
		}
	}

	 if(x==0){	 
	cout<<coc+1<<" "<<coc+1<<endl;
	}
	else{
		if(coc_max<coc)
		cout<<coc_min+1<<" "<<coc+1<<endl;
		else
		cout<<coc_min+1<<" "<<coc_max+1<<endl;
	}
	//	
	t--;	
	}
}
