#include <iostream>
using namespace std;

int main() {
	int y,k,n;
	cin>>y>>k>>n;
	
	if(n<=y)
	{
		cout<<-1;
		exit(0);
	}
	
	int i=k-y%k;
	
	if(i>n-y)
	{
		cout<<-1;
		exit(0);
	}
	for(int x=i;x<=n-y;x+=k)
	{
		cout<<x<<" ";
	}
	
	return 0;
}
