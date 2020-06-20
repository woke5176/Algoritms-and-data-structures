#include <bits/stdc++.h>
#include <string> 
#include<iostream>
using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q){
	int i,n;
	for(i=p;i<q;i++){
	n = i*i;
	int t;
	t = n;
	int d = log(n)+1;
	int x,y,pa,pb;
	pa = pow(10,d/2);
	pb = pow(10,(d/2+1));
	if(d%2==0){
		x = t/pa;
		y = t%pa; 
	}
	else
	{
		x = t/pb;
		y = t%pb;
	}
	if(x+y == n){
		cout<<i<<endl;
	}

	}
}


int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}

