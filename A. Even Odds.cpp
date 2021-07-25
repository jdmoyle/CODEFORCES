#include <iostream>
using namespace std;

typedef long long ll;

int main() {
	ll n,k;
	cin>>n>>k;
	
	ll t=n/2+n%2;
	
	if(k<=t)
	{
		ll ans=-1;
		while(k--)
		{
			ans+=2;
		}
		cout<<ans<<endl;
		exit(0);
	}
	
	ll K=k-t;
	
	ll ans=0;
	while(K--)
	{
		ans+=2;
	}
	cout<<ans<<endl;
	return 0;
}
