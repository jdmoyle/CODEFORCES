#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>> n;
	
	if(n>=0)
	{
		cout<<n;
		exit(0);
	}
	n=-n;
	
	
	int n1=n%10;
	int n2=(n%100)/10;
	
	if(n1>n2)
	{
		cout<<-(n/10);
	}
	else
	{
		int ans=(n/100);
		ans=ans*10+((n%10));
		cout<<-ans<<endl;
	}
	return 0;
}
