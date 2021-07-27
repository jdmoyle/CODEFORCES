#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	
	if((x==0 && y==0) || (x==1 && y==0))
	{
		cout<<0;
		return 0;
	}
	int ans;
	if(x==0)
	{
		if(y>0)
		ans=4*y-2;
		else
		ans=4*(-y);
	}
	else if(y==0)
	{
		if(x>0)
		ans=4*x-3;
		else
		ans=4*(-x)-1;
	}
	else if(x>0 && y>0)
	{
		if(x>y)
		ans=4*x-3;
		else if(y>x)
		ans=4*y-2;
		else
		ans=4*y-2-1;
	}
	else if(x>0 && y<0)
	{
		if(x<=abs(y)+1)
		ans=4*(-y);
		else if(x>abs(y)+1)
		ans=4*x-3;
	}
	else if(x<0 && y<0)
	{
		if((-x)>=(-y))
		{
			ans=4*(-x)-1;
		}
		else if((-x)<(-y))
		ans=4*(-y);
	}
	else if(x<0 && y>0)
	{
		if(abs(x)>y)
		ans=4*(-x)-1;
		else if(abs(x)<=y)
		ans=4*y-2;
	}
	cout<<ans;
	return 0;
}
