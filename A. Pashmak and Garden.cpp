#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
 
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
 
	int d;
	int x3,y3,x4,y4;
 
	if(x1==x2 && y1==y2)
	{
		cout<<-1;
		return 0;
	}
	else if(x1==x2)
	{
		d=abs(y2-y1);
 
		y3=y1;
		x3=x1+d;
		y4=y2;
		x4=x3;
		if(x3>1000)
		{
			x3-=2*d;
			x4=x3;
		}
	}
	else if(y1==y2)
	{
		d=abs(x2-x1);
		y3=y1+d;
		x3=x2;
		y4=y3;
		x4=x1;
 
		if(y3>1000)
		{
			y3-=2*d;
			y4=y3;
		}
 
	}
	else if(x1!=x2 && y1!=y2)
	{
		if(abs(x1-x2)!=abs(y1-y2))
		{
			cout<<-1;
			return 0;
		}
		d=abs(x1-x2);
 
		x3=x2,y3=y1;
		x4=x1,y4=y2;
 
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	    return 0;
	}
 
 
	if(x3<-1000 || y3<-1000 || y4<-1000 || x4<-1000)
	{
		cout<<-1;
		return 0;
	}
	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	return 0;
}
