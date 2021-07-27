#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	int sockets[n];
 
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>sockets[i];
		sum+=sockets[i];
	}
 
	sort(sockets,sockets+n);
 
	if(m<=k)
	{
		cout<<0;
		exit(0);
	}
 
	int ans=0;
	//BOTH AC
 
	/*
	while(k>0 && n>0)
	{
 
		if(k==1)
		{
			if(sum-n+1<m)
			{
				cout<<-1;
				exit(0);
			}
			m=m-sockets[n-1]+1;
			cout<<m<<endl;
			ans++;
			n--;
		}
		else
		{
			m-=sockets[n-1];
			sum-=sockets[n-1];
			ans++;
			k--;
			n--;
 
		}
		if(m<k || m<=0)
		{
			cout<<ans;
			exit(0);
		}
	}*/
	 // OR 
 
	//making k=1; k-1 devices doesnt need supply line filter
	m-=(k-1);
	if(sum-n+1<m)
	{
		cout<<-1;
		exit(0);
	}
 
	while(n>0)
	{
		if(m>sockets[n-1])
			m=m-sockets[n-1]+1;
		else
			m-=sockets[n-1];
		//cout<<m<<endl;
		ans++;
		n--;
 
		if(m<=0)
		{
			cout<<ans;
			return 0;
		}
	}
 
 
	cout<<-1;
	return 0;
}
