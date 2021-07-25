#include <iostream>
#include<algorithm>
using namespace std;

bool check(long long n)
{
	while(n>0)
	{
		long long r=n%10;
		n/=10;
		if(r==8)
		return true;
	}
	return false;
}

int main() {
	long long a;
	cin>>a;
	

	long long ans,c=1;
	for(long long i=1;i<=16;i++)
	{
		long long int x=a+i;
		if(check((long long )abs(x)))
		{
			ans=i;
			break;
		}
		
	}
	cout<<ans;
	return 0;
}
