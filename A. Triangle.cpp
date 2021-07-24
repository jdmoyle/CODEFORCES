#include <iostream>
#include<vector>
using namespace std;

int a[4]={1,0,0,-1};
int b[4]={0,1,-1,0};



bool Triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	if((x1==x2 && y1==y2) || (x1==x3 && y1==y3) || (x2==x3 && y2==y3))
	return false;
	
	
	int ab=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	int bc=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
	int ca=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
	
	if(ab+bc==ca || ab+ca==bc || ca+bc==ab)
	{
		return true;
	}
	return false;
}

int main() {
	int  x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	if(Triangle(x1,y1,x2,y2,x3,y3))
	{
		cout<<"RIGHT";
		exit(0);
	}
	
	vector<int> v;
	v.push_back(x1);
	v.push_back(y1);
	v.push_back(x2);
	v.push_back(y2);
	v.push_back(x3);
	v.push_back(y3);
	
	for(int i=0;i<4;i++){
			
			int x=x1+a[i];
			int y=y1+b[i];
			
			if(Triangle(x,y,x2,y2,x3,y3))
			{
				cout<<"ALMOST";
				return 0;
			}
			x=x2+a[i];
			y=y2+b[i];
			if(Triangle(x1,y1,x,y,x3,y3))
			{
				cout<<"ALMOST";
				return 0;
			}
			x=x3+a[i];
			y=y3+b[i];
			if(Triangle(x1,y1,x2,y2,x,y))
			{
				cout<<"ALMOST";
				return 0;
			}
			
		}
	cout<<"NEITHER";
	
	return 0;
}
