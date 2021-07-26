#include <iostream>
#include<algorithm>
using namespace std;

void print(int x)
{
	if(x==0)
	cout<<'A';
	else if(x==1)
	cout<<'B';
	else if(x==2)
	cout<<'C';
	else
	cout<<'D';
}

int main() {
	string s;
	int a[4];
	int c=0,d=0,indx1,indx2;
	int mn=1000000000,mx=-1;
	for(int i=0;i<4;i++)
	{
		cin>>s;
		a[i]=s.size()-2;
		if(mn>a[i]){
			indx1=i;
			mn=a[i];
		}
		if(mx<a[i]){
			indx2=i;
			mx=a[i];
		}
	}
	
	for(int i=0;i<4;i++)
	{
		if(2*a[indx1]<=a[i] && indx1!=i){
			c++;
		}
		if(a[indx2]>=2*a[i] && indx2!=i){
			d++;
		}
	}
	
	if(c==3 && d==3)
	cout<<'C';
	else if(c==3)
	print(indx1);
	else if(d==3)
	print(indx2);
	else
	cout<<'C';
	return 0;
}
