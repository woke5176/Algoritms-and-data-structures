#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;while(t--)
	{
		int n;
		cin>>n;
		int a[n],i,flag=0,five=0,ten=0,fif=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		if(a[0]!=5)
		{
			cout<<"NO\n";
			continue;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==5)
			five++;
			else if(a[i]==10)
			{
				if(five<1)
				{
					flag=1;
					break;
				}
				five--;ten++;
			}
			else
			{
				if(ten<1)
				{
					if(five<2)
					{
						flag=1;
						break;
					}
					five-=2;fif++;
				}
				else
				{
					fif++;ten--;
				}
			}
		}
		if(flag)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
}
