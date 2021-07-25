#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}

int main() {
	ll l,r;
	cin>>l>>r;
	
	for(ll i=l;i<=r-2;i++)
	{
		for(ll j=i+1;j<=r-1;j++)
		{
			if(gcd(i,j)==1)
			{
				for(ll k=j+1;k<=r;k++){
					if(gcd(j,k)==1 && gcd(i,k)!=1)
					{
						cout<<i<<" "<<j<<" "<<k;
						return 0;
					}
				}
			}
		}
	}
	cout<<-1;
	return 0;
}
