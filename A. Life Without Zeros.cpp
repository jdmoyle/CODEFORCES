#include <bits/stdc++.h>
using namespace std;
 
int removeO(int n)
{
	int ans=0,ten=1;
	while(n>0)
	{
 
		int r=n%10;
		n/=10;
		if(r!=0)
		{
			ans+=r*ten;
			ten*=10;
		}
 
	}
	return ans;
}
 
int main() {
	int a,b;
	cin>>a>>b;
	int c;
	int r=a+b;
 
	int x=removeO(a);
	int y=removeO(b);
	int z=removeO(r);
	c=x+y;
 
	if(c==z)
	cout<<"YES";
	else cout<<"NO";
	return 0;
