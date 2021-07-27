#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	char road[n];
 
	int r=0,l=0;
	for(int i=0;i<n;i++)
	{
		cin>>road[i];
		if(road[i]=='R')
		r++;
		if(road[i]=='L')
		l++;
	}
	int s=100000,t=0,s1=0,t1=10000;
	for(int i=1;i<n;i++)
	{
		if(r!=0 && road[i]=='R')
		{
			s=min(s,i+1);
			if(l!=0)
			t=max(t,i+1);
			else
			t=max(t,i+2);
		}
		else if(r==0 && road[i]=='L')
		{
 
			s1=max(s1,i+1);
			t1=min(t1,i);
			s=s1;
			t=t1;
		}
	}
	cout<<s<<" "<<t;
 
	return 0;
}
