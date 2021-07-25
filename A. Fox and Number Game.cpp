#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}

int main() {
	int n;
	cin>>n;
	int a[n];
	int g=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!=0)
		{
			g=gcd(g,a[i]);
		}
	}
	cout<<g*n;
	return 0;
}
