#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
	long long n,k;
	cin>> n >> k;
   for(long long i=2;i<=k;i++){
   	long long max_v= 0;
   	long long min_v=10;
   	long long temp=n;
   	while(temp){
   	    long long ndup=temp%10;
   	    max_v=max(max_v,ndup);
   	    min_v=min(min_v,ndup);
   	   temp=temp/10;
   		
	   }
	   if(min_v=0){
	   	break;}
	   n=n+(max_v * min_v);
	   
	    }
	     cout<<n<<endl;
  
}
}

