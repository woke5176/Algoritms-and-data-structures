#include<bits/stdc++.h>
using namespace std;
int main()
{   int t; cin>>t;
	while(t>0){
	
	int n; cin >> n;
 
		int x;
 
		for (int k = 2; k <= 35; ++k)
		{
			int den = pow(2, k) - 1;
 
			if (n % den)
				continue;
 
			x = n / den;
 
			break;
		}
 
		cout << x << '\n';
		t--;
	}
}


	
